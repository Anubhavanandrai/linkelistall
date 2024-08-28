#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int dat){
        this->data=dat;
        this->next=NULL;
    }


void addAtbegin(int dat,Node* &head,Node* &tail){
    if(tail==nullptr && head==nullptr){
        Node* temp=new Node(dat);
        tail=temp;
        head=temp;
    }
    else{
        Node* temp=new Node(dat);
        temp->next=head;
        head=temp;
    }}


void addAttail(int data,Node* &tail,Node* head){
 if(tail==nullptr && head==nullptr){
    Node* temp=new Node(data);
     tail=temp;
        head=temp;
 }
else{
     Node* temp=new Node(data);
     tail->next=temp;
     tail=temp;
}}

 void printList(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }



void reverse(){
    while(tail!=head){
        head->data=tail->data;
    }
}
};
int main() {
    Node obj;
    Node* head = nullptr;
    Node* tail = nullptr;
    int choice;

    do {
        cout << "1: AddAtbegin      2: AddAttail      3: Print List      4: Exit      5:ReverseLinkedlist"<< endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                int d;
                cout << "Enter value: ";
                cin >> d;
                obj.addAtbegin(d, head, tail);
                break;
            }
            case 2: {
                int n;
                cout << "Enter value: ";
                cin >> n;
                obj.addAttail(n, tail, head);
                break;
            }
            case 3: {
                cout << "Linked List: ";
                obj.printList(head);
                break;
            }
            case 4: {
                cout << "Exiting program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice! Please choose again." << endl;
                break;
            }
        }
    } while (choice != 4);

    return 0;
}

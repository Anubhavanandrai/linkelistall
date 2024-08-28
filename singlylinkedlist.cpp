
#include <iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
    
    node(int val){
        this->data=val;
        this->next=NULL;
        
    }
};

void insertAtbegin(int da,node* &head){
    node* temp=new node(da);
    temp->next=head;
    head=temp;  
}


void insertAttail(int da,node* &tail){
    node* temp=new node(da);
    tail->next=temp;
    tail=temp;
}


void insertAtposition(int pos,int dat,node* head){
    node* temp=new node(dat);
    node* find=head;
    int count=1;
    while(count!=pos-1){
        find=find->next;
        count++;
    }
   temp->next=find->next;
    find->next=temp;
}

void deleteAtposition(int pos){

}

void print(node *head){
    node* current=head;
    while(current!=NULL){
       cout<< current->data<<" ";
       current=current->next;
    }
}

int main()
{

//first node
node* first=new node(5);
// head pointr
node* head=first;
node* tail=first;
cout<<head<<endl;

cout<<first->data<<endl;


insertAtbegin(15,head);
insertAtbegin(25,head);
insertAtbegin(35,head);
insertAtbegin(45,head);


insertAttail(7,tail);
insertAttail(27,tail);
insertAttail(876,tail);
insertAttail(73,tail);
insertAttail(75,tail);
insertAttail(775,tail);
insertAttail(7745,tail);

insertAtposition(4,87,head);
insertAtposition(9,102,head);
insertAtposition(3,150,head);
insertAtposition(4,99,head);
insertAtposition(9,100,head);
print(head);
cout<<endl;
cout<<tail->data;
    return 0;
}

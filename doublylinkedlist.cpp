
#include <iostream>
using namespace std;



class Block{
    public:
    int data;
    Block* prev;
    Block* next;

Block(int dat){
    this->data=dat;
    this->prev=NULL;
    this->next=NULL;
}

};

void addAtbeginning(int val,Block* &head){
    Block* temp=new Block(val);
    temp->next=head;
    head->prev=temp;
    head=temp;
}


void addAttail(int val,Block* &tail){
    Block* temp=new Block(val);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}


void addAtposition(int data,int pos,Block* head){
    Block* temp=new Block(data);
    Block* find=head;

int ctr=1;

    while(ctr!=pos-1){
        find=find->next;
        ctr++;
    }
 
  temp->next=find->next;
   temp->next->prev=temp;
 find->next=temp;
 temp->prev=find;

 

}

void Print(Block* &head){
    Block* curr=head;
while(curr!=NULL){
    cout<<curr->data<< " ";
    curr=curr->next;

}
cout<<endl;
}


int main(){


Block* first = new Block(10);
Block* head=first;
Block* tail=first;


cout<<head<<"first head"<<endl;
cout<<tail<<"first tail"<<endl;
cout<<head->data<<endl;
cout<<tail->data;
cout<<endl;


addAtbeginning(20,head);
addAtbeginning(30,head);
addAtbeginning(40,head);
addAtbeginning(50,head);



Print(head);
cout<<head<<"second head"<<endl;
cout<<tail<<"second tail"<<endl;
cout<<head->data<<endl;
cout<<tail->data;
cout<<endl;

addAttail(56,tail);
Print(head);
cout<<tail<<"3rd tail"<<endl;
cout<<tail->data<<endl;

addAtposition(13,5,head);
addAtposition(133,2,head);
Print(head);
    return 0;
}
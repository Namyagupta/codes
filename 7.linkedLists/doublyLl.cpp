#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(node* &head, int val){

    node* n= new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }

    head=n;
}


void insertAtTail(node* &head, int val){

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* n=new node(val);
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
    n->prev=temp;

}

void deleteNode(node* &head, int val){
    node* temp = head;

    //if todel is the first node
    if(val == head->data){
        node* toDel = head;
        head = head->next;
        head->prev = NULL;
        delete toDel;
        return;
    }

    //not the first node
    while(temp->data!=val){
        temp = temp->next;
    }
    temp->prev->next = temp->next;

    //if to del is not the last node
    if(temp->next!=NULL){
        temp->next->prev = temp->prev;
    }
    delete temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    insertAtHead(head,9);
    display(head);
    deleteNode(head, 4);
    display(head);
    return 0;
}
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//REVERSING A LINKED LIST - ITERATIVE WAY
node* reverse(node* head){
    node* prev = NULL;
    node* curr = head;
    node* fut;

    while(curr!=NULL){
        fut=curr->next;
        curr->next = prev;

        prev=curr;
        curr=fut;
    }

    return prev;
}

//REVERSING A LINKED LIST - RECURSIVE WAY
node* reverseRec(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    display(head);

    node* newhead = reverseRec(head);
    display(newhead);
    return 0;
}
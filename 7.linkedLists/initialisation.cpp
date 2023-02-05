#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next=NULL;
    }
};

//insert at head
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next = head;
    head = n;
}

//insert at tail -> taking function by reference as it is to be modified
void insertAtTail(node* &head, int val){
    
    node* n = new node(val);

    if(head==NULL){
        // head=n;
        // return;
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

//print ll
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//search the element
// void search(node* head, int val){
//     node* temp = head;
//     int ctr=0;
//     while(temp->data != val){
//         temp= temp->next;
//         ctr++;
//     }
//     cout<<ctr<<"is the position";
// }

//bool search - whether element there or not
bool search(node* head, int val){
    node* temp = head;
    int ctr=0;
    while(temp!=NULL){
        if(temp->data == val) {
            return true;
        }
        temp= temp->next;
    }
    return false;
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
    cout<<search(head,4);
    return 0;
}
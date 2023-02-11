//append k nodes at the start of the linked list
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

// void insertAthead(node* &head, int val){
//     node* n=new node(val);
//     n->next=head;
//     head=n;
// }

void insertAtTail(node* &head, int val){

    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int calcLength(node* head){
    node* temp = head;
    int l=0;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* appendNodes(node* &head, int k){
    node* newHead;
    node* newTail;
    //tail 
    node* tail = head;

    int l = calcLength(head);
    int count = 1;
    //while tail reaches the last node
    while(tail->next!=NULL){
        //when the node comes on the l-kth node
        if(count==l-k){
            //the new tail will be the split point
            newTail = tail;
        }
        if(count == l-k+1){
            //new head will become just after the new tail
            newHead = tail;
        }
        tail=tail->next;
        count++;
    }
    //assigning newtail to go to NULL as it will be the last node now
    newTail->next=NULL;
    //assigning the last element originall to the head as it will come before it now
    tail->next = head;

    return newHead;
}

int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    int k;
    cout<<"Pls enter k: ";
    cin>>k;
    node* newHead = appendNodes(head,k);
    display(newHead);
}
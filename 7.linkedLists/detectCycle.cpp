//Detect cycle in linked list 
//Floyd's Algo
//Hare and Tortoise Algo

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
        head = n;
        return;
    }

    node* temp=head;

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

bool detectCycle(node* head){
    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return 1;
        }
    }
    return 0;
}

void makeCycle(node* &head, int pos){
    node* temp=head;
    node* startNode;

    int ctr =1;
    while(temp->next != NULL){
        if(ctr == pos){
            startNode = temp;
        }
        temp=temp->next;
        ctr++;
    }

    temp->next = startNode;
}

void removeCycle(node* head){
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;

    }while(slow != fast);

    fast = head;
    while(slow->next!=fast->next){
        fast = fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
}

//reverse linked list 
// node* reverseLl(node* head){
//     node* prev = NULL;
//     node* curr = head;
//     node* fut;

//     while(curr!=NULL){
//         fut = curr->next;
//         curr->next = prev;
        
//         prev = curr;
//         curr = fut;
//     }
//     return prev;
// }

int main(){
    node* head= NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    display(head);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;

    removeCycle(head);
    display(head);
    return 0;
}
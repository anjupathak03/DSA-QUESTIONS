#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
     Node(int data){
        this->data=data;
        this->next=NULL;    
    }
};

void insertnodeattail(Node* &tail, Node* &head, int data){
    Node* newnode =new Node(data);
    if(tail==NULL){
        tail=newnode;
         head=newnode;
    }
    else{
         tail->next = newnode;
        tail = newnode;
}
}
int findmiddleelement(Node* head){
    Node* fast =head;
    Node* slow =head->next;
    while(fast->next!=NULL){
    fast=fast->next;
    if(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow->data;
}
}
int len = 0;
int getlength(Node* head){
    Node* temp = head;
    temp=temp->next;
    

}
Node* reversethelinklist(Node* head, int k){
    if(head == NULL){
        cout<<"LL is Empty"<<endl;
        return NULL;
    }

    Node* prev = NULL;
    Node* curr= head;
    Node* forward=head->next;
int count =0;
while(count<k){
forward=curr->next;
curr->next=prev;
prev=curr;
curr=forward;
    count++;
if(forward != NULL){
    head->next = reversethelinklist(forward, 3);
    return prev;
}
}
}
void print(Node* head){
    
Node* temp = head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
 }
  cout << endl;
}
int main(){
    
Node* tail = NULL;
Node* head = NULL;
insertnodeattail(tail, head,  87);
insertnodeattail(tail, head, 34);
insertnodeattail(tail, head, 35);
insertnodeattail(tail, head, 39);
insertnodeattail(tail, head, 30);
   // print(head);
  // cout<<findmiddleelement(head)<<endl;

head = reversethelinklist(head, 3);
print(head);
return 0;
}
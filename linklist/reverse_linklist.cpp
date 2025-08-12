#include<iostream>
using namespace std;

class Node{
    public:
     int data;
    Node* next;
    
    Node(){   
    this->data = 0;
     this->next = NULL;
}
      Node(int data){    
     this->data = data;
    this->next = NULL;
    }
};

Node* reverse(Node* &prev, Node* &curr){
    if(curr==NULL){
        return prev;
    }
    Node* forward =curr->next;
    curr->next = NULL;
    curr->next = prev;
   
                     
    reverse(curr, forward);              


 }
void insertathead(Node* &head, int data){
      Node* newnode =new Node(data);
       newnode->next=head;
    head=newnode;
}
void print(Node*head){
    Node* temp =head;
    while(temp!=0){
    cout<< temp->data<<" ";
    temp=temp->next;
}
}
int main(){
    Node* head = NULL;
    Node* prev =NULL;
   // Node* curr = head;


   insertathead(head, 20);
   insertathead(head, 70);
   insertathead(head, 60);
   head = reverse(prev, head);
    print(head);
   print(prev);
    return 0;
}
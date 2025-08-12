#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int data){
    this->data= data;
    this->next= NULL;
}
Node(){
    this->data= 0;
    this->next= NULL;
}

};
 void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    

 }
cout<<endl;
 }
 Node* middleelement(Node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head->next==NULL){
        return head;
    }

    Node* fast = head;
    Node* slow = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
    }
    return slow;
 }

int main(){
    Node* head = new Node(23);
     Node* second = new Node(93);
      Node* third = new Node(83);
       Node* fourth = new Node(43);
        Node* fifth= new Node(53);
         Node* sixth= new Node(63);
         head->next = second;
         second->next=third;
         third->next=fourth;
         fourth->next=fifth;
         fifth->next=sixth;
         sixth->next=NULL;
          print(head);
         cout<<middleelement(head)->data<<endl;
        // print(head);
         return 0;
}
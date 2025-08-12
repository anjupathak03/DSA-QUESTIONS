#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
      Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

};
void print(Node* head){
    Node* temp =head;
    while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
 }}

 int len(Node* head){
    int i=0;
    Node* temp =head;
    while(temp!=NULL){
        temp = temp->next;
        i++;
    }

 }


int main(){
    Node* first = new Node(10);
     Node* second = new Node(20);
  Node* third = new Node(30);
  Node* f = new Node(40);

  first->next = second;
  second->prev =first;
  second->next = third;
  third->prev = second;
  third->next = f;
  f->next = NULL;
    len(first);
   
    print(first);
}
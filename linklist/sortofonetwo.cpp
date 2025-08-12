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

 void print(Node* head){
     Node* temp =head;
     while(temp != NULL){
        cout<<temp->data << " ";
        temp = temp->next;
     }
 }
 void counttheno(Node* &head){
    int count1 =0; int count2 =0; int count3 =0;
    Node* temp = head;
    
   while(temp->next != NULL){
    
    
    if(temp->data == 0){
        count1++;    
    }
    
    else if(temp->data == 1){
        count2++;   
    }
    
   else{
        count3++; 
    }
    temp = temp->next;
   }
 
 temp = head;
 
while(temp->next != NULL){
    if(count1>0){
        temp->data=0;
        count1--;
    }
     else if(count2>0){
        temp->data=1;
        count2--;
    }
    else{
         temp->data=2;
        count3--;

    }
    temp = temp->next;
 }

 }


int main(){
    Node* head = new Node(0); 
    Node* f = new Node(1); 
    Node* i = new Node(0); 
    Node* t = new Node(0); 
    Node* g = new Node(2); 
    Node* s = new Node(2); 
    

    head->next = f;
    f->next = i;
    i->next = t;
    t->next = g;
    g->next = s;
    s->next = NULL;
     
     counttheno(head);
     print(head);
     return 0;

}
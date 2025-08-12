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


Node* removedublicate(Node* head) {
    Node* curr = head;
    while(curr->next != NULL){                  
    if(curr->data==curr->next->data){
        Node* temp = curr->next;
       
        curr->next=curr->next->next;  
        temp->next = NULL;
         delete temp;

    }
    else{
        curr = curr->next;
    }

}
}


int main(){
    Node* head = new Node(89); 
    Node* f = new Node(89); 
    Node* i = new Node(230); 
    Node* t = new Node(230); 
    Node* g = new Node(98); 
    Node* s = new Node(98); 
    

    head->next = f;
    f->next = i;
    i->next = t;
    t->next = g;
    g->next = s;
    s->next = NULL;
     
     removedublicate(head);
     print(head);

}
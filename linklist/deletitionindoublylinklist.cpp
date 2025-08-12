#include<iostream>
using namespace std;

class Node{
     public:
     int data;
     Node* next;
     Node* prev;

     Node(){
        int data = 0;
        this->next=NULL;
        this->prev=NULL;

     }
     Node(int data){
        int data = data;
        this->next=NULL;
        this->prev=NULL;

     }

};


int main(){
    Node* head=NULL;
    Node* tail=NULL;

    deletenode(head, tail, 4);
    print(head);
}


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
// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data;
//         temp->next=temp;
//     }
// }
bool checktheloop(Node* head){
    Node* slow=head;
     Node* fast=head;
     
     while(fast!=NULL && fast->next != NULL){
        fast = fast->next;
     if(fast != NULL){
        fast = fast->next;
        slow = slow->next;
     }
     if(fast == slow){
        cout<<"loop is present"<<" ";
        return true;
     }
}
        cout<<"loop is ab"<<" ";
           return false;
     }

     
    




int main(){
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* sec = new Node(40);
    Node* third = new Node(60);
    Node* fourth = new Node(90);
   

head->next = first;
first->next = sec;
sec->next =third;
third->next =fourth;
fourth->next =NULL;

bool ans = checktheloop(head);
cout<<ans;

}
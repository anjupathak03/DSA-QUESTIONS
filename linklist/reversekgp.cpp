#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    Node(){
        this->data=0;
        this->next=NULL;
    }

};
 int getlen( Node* head){
    int count =0;
    Node* temp =head;
    while(temp!=NULL){
             temp = temp->next;
             count++;
    }
    return count;

 }
 Node* reverse(Node* head, int k){
    //THERE IS 0 NODES, EMPTY
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len = getlen(head);
     //THERE IS 1 NODE
    if(k>len){
        cout<<"write valid k"<<endl;
        return head;
    }
    //MORE THAN 1 NODE
    int count =0;
    Node* prev = NULL;
        Node* curr = head;
        Node* forward = curr->next;
    while(count<k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward; //yha current variable h curr move kr rha h to usme value assign hogi
        count++;


    }
    if(forward != NULL){
        head -> next = reverse(forward, k);
    }

return prev;

 }




 void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
 }
int main(){
    Node* head = new Node(10);
    Node* sec = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(33);
    Node* sixth= new Node(22);

    head->next = sec;
    sec->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
  print(head);
   head = reverse(head, 3);

    print(head);
    return 0;

}

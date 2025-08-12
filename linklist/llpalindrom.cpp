#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
       this->next = NULL;
       this->data = data; 

    }
    
    Node(){
       this->next = NULL;
       this->data = 0; 

    }
};


Node* reversethell(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = curr->next;
    while(curr != NULL){
        forward = curr->next;
        curr->next=prev;
        prev =curr;
        curr =forward;
        
    }
    return prev;
    

}

Node* findmiddle(Node* head){
     Node* fast = head->next;
     Node* slow = head;
     fast = fast->next;
    while(fast != NULL){
    fast = fast->next;
    slow = slow->next;
}
return slow;
}
bool isPalindrome(Node* head){
    if(head == NULL){
        return false;
    }
    if(head->next == NULL ){
        return true;
    }
    
    Node* middle = findmiddle(head);
     
    
Node* temp1 = head;
 
Node* temp2 = reversethell(middle->next);
 
    while(temp1 != middle && temp2 != NULL ){
       if(temp1->data == temp2->data){
        temp1=temp1->next;
         temp2=temp2->next;
       }
       else{
        return false;
       }
      
        
    }
    return true;
   
     
    


}
int main(){
    Node* head = new Node(40);
    Node* second = new Node(44);
    Node* third = new Node(33);
    Node* fourth =new Node(33);
    Node* fifth = new Node(44);
    Node* sixth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
   
    if( isPalindrome(head)){
        cout<< "palindrome hai";
    }
    else{
        cout<< "palindrome nhi hai";
    }

    return 0;
   
}
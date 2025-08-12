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
 Node* reversell(Node* &head1){
    Node* curr = head1;
    Node* prev = NULL;
    Node* forward = curr->next;
    while(curr != NULL){
        forward = curr->next; 
        curr->next = NULL;
        curr->next =prev;
        prev = curr;
        curr = forward;
        
    }
    return prev;
 }
 Node* addll (Node* &head1, Node* &head2){
     
 Node* r1 =reversell(head1);
Node* r2 = reversell(head2);
 
 Node* sum = new Node(0);
 Node* temp = sum;
 
 
  int carry=0;
while(r1 != NULL && r2 != NULL){
   
  int add = r1->data + r2->data + carry;
  r1 = r1->next;
  r2 = r2->next;
  
  int digit = add % 10;
  carry = add/10;
  temp->next = new Node(digit);
        temp = temp->next;
  
   
}
 Node* result = reversell(sum->next);
    return result;
 }
   
   
 


int main(){
    Node* head1 = new Node(1); 
    Node* f = new Node(1); 
    Node* i = new Node(2); 
    Node* t = new Node(3); 
    Node* g = new Node(4); 
    Node* s = new Node(5); 
    
     
    
    

    head1->next = f;
    f->next = i;
    i->next = t;
    t->next = g;
    g->next = s;
    s->next = NULL;
    print(head1);
    cout<<endl;
     Node* head2 = new Node(1); 
    Node* fr = new Node(22); 
    Node* ir = new Node(3); 
    Node* tr = new Node(4); 
    Node* gr = new Node(5); 
    Node* sr = new Node(2); 
    
    

    head2->next = fr;
    fr->next = ir;
    ir->next = tr;
    tr->next = gr;
    gr->next = sr;
    sr->next = NULL;
     print(head2);
    cout<<endl;
     
    //print(head1);
    //cout<<endl;
    //print(head2);


    
     Node* ssp = addll(head1, head2);
     
      print(ssp);
     
    //  cout<<endl;
    // // reversell(head1);
    
    //   print(head1);
     return 0;

}
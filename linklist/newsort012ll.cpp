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
 Node* counttheno(Node* &head){
   
   Node* onedummy = new Node(-1);
    Node* twodummy = new Node(-1);
     Node* threedummy = new Node(-1);
     Node* temp =head;
     Node* temp1 =onedummy; //temp bnana jroori kyunki head move nhi kr skta 
     Node* temp2 =twodummy;
     Node* temp3 =threedummy;
     while(temp != NULL){
        if(temp->data == 0){      // 0 vali ll bn gyi 
            temp1->next = temp;
            temp1 = temp1->next;  // isse 0 vali ll k last m phuch gye
        }
         else if(temp->data == 1){
            temp2->next = temp;
             temp2 = temp2->next;  // isse 1 vali ll k last m phuch gye
        }
         else {
            temp3->next = temp;
             temp3 = temp3->next; // isse 2 vali ll k last m phuch gye
        }
        temp=temp->next;

     }
  head = onedummy -> next;
    temp1 -> next = twodummy -> next; // temp1 k last m twodummy ka agla yani ==> 1 vali ll ka head lga diya
    temp2 -> next = threedummy -> next;
    temp3 -> next = NULL;

    onedummy->next = NULL;
    twodummy->next = NULL;
    threedummy->next = NULL;

    delete onedummy;
    delete twodummy;
    delete threedummy;

    return head;
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
    
     Node* kkl = counttheno(head);
     print(kkl);
     return 0;

}
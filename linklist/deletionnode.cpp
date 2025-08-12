#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout<<"Node value:"<<this->data<<" deleted"<<endl; 
    }
};

 
 void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void insertatnodehead(Node* &head, Node* &tail, int data) {
    Node* newnode = new Node(data);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

void insertatnodetail(Node* &head, Node* &tail, int data) {
    Node* newnode = new Node(data);
    if (tail == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}


int findlength(Node* head){
    Node* temp = head;
    int i=0;
    while(temp!=NULL){
    temp = temp->next;
    i++;
    
}
return i;
}


void deletefrompos(Node* &head, Node* &tail, int pos){

    if(head==NULL){
        cout<<"can not delete LL"<<endl;
        return;
    }
    if(pos==1){
        Node*temp=head;
        head = head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
   
    int len=findlength(head);
    if(pos==len){
        int i=1;
        Node*prev=head;
        while(i<pos-1){
            prev=prev->next;
            i++;
        }
        Node*temp=tail;
        prev->next=NULL;
        tail=prev;
        delete temp;
        return;
    }
   


}
void deletefrommiddle(Node* &head, Node* &tail, int pos){
    int i=1;
    Node* prev = head;
    while(i<pos-1){
        prev = prev->next;
      i++;
    }

    Node* curr = prev->next;
    Node* nextnode = curr->next;
   
curr->next =NULL;
prev->next=NULL;
delete curr;
prev->next=nextnode;

return;


}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertatnodehead(head, tail, 20);
    insertatnodehead(head, tail, 70);
    insertatnodehead(head, tail, 60);
    insertatnodetail(head, tail, 80);
    cout<<"1"<<endl;

    print(head);
   

    deletefrompos(head, tail, 1);
    
    print(head);
    deletefrommiddle(head, tail, 2);
    print(head);
    return 0;
}

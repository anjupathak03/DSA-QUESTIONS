#include<iostream>
#include<stack>
using namespace std;


void insertatbottom(stack<int> &e, int &target){
  
    if(e.empty()){
        e.push(target);
         return ;
     }

    
int temp = e.top();
e.pop(); 
 insertatbottom(e, target);
  if(temp != target){
     e.push(temp);
  } 
  //e.push(temp);
   
}
void reversestack(stack<int> &e){
  
    if(e.empty()){
         return ;
     }

    
int temp = e.top();
e.pop(); 
  reversestack(e);
  insertatbottom(e, temp);
  
 
   
}
 
 void print (stack<int> &e){
   // e.pop();
     // removing duplicate 8, stack first element remove krke print kra diya
    while(!e.empty()){
    cout<<e.top()<<" ";
    e.pop();
 }
 }
int main(){
   stack<int> e;
    e.push(1);
    e.push(2);
    e.push(3);
    e.push(4);
    e.push(5);
    e.push(6);
    e.push(7);
    e.push(8);
   
    
    //int size = e.size(); 
      int target = e.top(); 
   //int middle = e.size()/2;
  reversestack(e); 
  
   print(e);
}
#include<iostream>
#include<stack>
using namespace std;

void findmiddleelement(stack<int> &e, int size ){
   
    if(e.size() == size/2+1 ){
        cout<<e.top()<<endl;
       
         return ;
     }

    
int temp = e.top();

e.pop(); // resuced size of stack



   
//   while(top < middle){
//    top++;
//      //cout<<e.top()<<" ";
//       //e.pop();
//   }
  
  //return middle;
  //findmiddleelement(e, middle, top);
   findmiddleelement(e, size);
  e.push(temp);
 
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
   
    
    int size = e.size(); 
    
       
   //int middle = e.size()/2;
  findmiddleelement(e, size); 
   
}
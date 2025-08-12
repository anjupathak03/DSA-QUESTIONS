#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        top = -1;
       
        this->size = size;
        arr = new int[size];

    }
    void push(int data){
        if(size-top <=1){
            cout<<"stack is overflow"<<endl;
        }
        else{
            top++;
            arr[top] = data;
            
        }


    }
    void pop(){
        if(top == -1){
            cout<<"stack is underflow";
        }
        else{
            top--;
            
        }
        
    }
    int gettop(){
          if(top == -1){
            cout<<"stack is underflow";
        }
        else{
            return arr[top];
        }

        
    }
    int getsize(){
        return top+1;
        
    }
    bool isEmpty(){
         if(top == -1){
            return true;
        }
        else{
             return false;
        }
        
      
    }
};

int main(){
    Stack objjj(10);
    objjj.push(45);
      objjj.push(55);
      objjj.push(33);
      objjj.push(42);
      objjj.push(41);
      objjj.pop();
      cout<<objjj.getsize()<<endl;
      while(!objjj.isEmpty()){
        cout<<objjj.gettop()<<" ";
        objjj.pop();

      }cout<<endl;
      
    
}




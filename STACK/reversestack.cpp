#include<iostream>
using namespace std;

class Stack{
    public:
    char *arr;
    int top;
    int size;

    Stack(int size){
        top = -1;
       
        this->size = size;
        arr = new char[size];

    }
    void push(char data){
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
    char gettop(){
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
void insertstringintostack(string name, Stack &objjj){
  for(int i=0; i<name.length(); i++){
    objjj.push(name[i]);
  }
     while(!objjj.isEmpty()){

        cout<<objjj.gettop()<<" ";
        objjj.pop();

      } 
      cout<<endl;
      
   return ;
}

int main(){
        string name = "Anju";
     Stack objjj(name.length());
     insertstringintostack(name, objjj);
     return 0;
     
    
}




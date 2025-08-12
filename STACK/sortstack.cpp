#include<iostream> 
using namespace std;
#include<stack>

void print(stack<int> &s){
    while(!s.empty()){
    cout<<s.top();
    s.pop();
    cout<<" ";
}
}

void insertsorted(stack<int> &s, int target){

      if(s.empty()){
        s.push(target);
         return ;
     }
    if(target<=s.top()){  //empty se compare if stack null so , s.empty() important
        s.push(target);
        return;
    }
int st = s.top();
s.pop();
insertsorted(s, target);
s.push(st);

}
void sortstack(stack<int> &s){
if(s.empty()){
return;
}
int kt = s.top();
s.pop();
sortstack(s);

insertsorted(s, kt);



}


int main(){
stack<int> s;
s.push(9);
s.push(3);
s.push(4);
s.push(5);
int target = 8;

sortstack(s);
print(s);

}
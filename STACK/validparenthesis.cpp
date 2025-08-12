#include<iostream> 
using namespace std;
#include<stack>

bool checkvalidparenthesis( stack<char> &p, string &s){

    
    for(int i=0; i<s.size(); i++){
    char ch = s[i];


    if(ch=='(' ||ch=='[' || ch =='{'){

p.push(ch);
         
    }
    else{
       if(!p.empty())
        {
        char st = p.top();
       
        if(st=='(' && ch == ')'){
            p.pop();
        }
         else if(st=='[' && ch == ']'){
            p.pop();
        }
        else if(st=='{' && ch == '}'){
            p.pop();
        }
        else{
           return false;
        }


    }
    else{
        return false;
    }
}
        }
  if(p.empty()){
    return true;
}
else{
    return false;
}
}
        

int main(){
    string s = { '(', ')', '[', ']', '{', '}'};
    stack<char> p;
    bool status = checkvalidparenthesis(p, s);
    cout<< status ;

}
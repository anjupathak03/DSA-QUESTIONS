// ye correct nhi h;


#include<iostream> 
using namespace std;
#include<stack>

bool checkvalidparenthesis( stack<char> &p, string &str){
bool valid = false;
    
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
    if(ch=='(' ){

p.push(ch);
         
    }

    else if(str[i] == 'a' || str[i] == 'b' || str[i] == 'c'|| str[i] == 'd'){
            continue;
            } 
    else if(str[i]=='+'){
      
               valid =true;
              
            }                        
   
    else  {
    if(!p.empty())
        {
        char st = p.top();
       
    if(valid==true && st=='(' && ch == ')' ){
            p.pop();
             valid = false;
        }
         
    else{
           return false;
        }
        }
        else {
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
    string str = "((a+b))";
    stack<char> p;
    bool status = checkvalidparenthesis(p, str);
    cout<< status ;

}
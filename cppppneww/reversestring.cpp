#include<iostream>
using namespace std;
#include<cstring>

char* reverse(char str[]){
int l =strlen(str);
int s =0;
int e =l-1;

    while(s<e){
  
        swap(str[s],str[e]);
    
        s++;
        e--;
    }
 

return str;
}

int main(){

    char str[100];
    cout<<"enter the string"<<endl;
    cin>>str;
    char* rs = reverse(str);
    cout<<rs;
return 0;
}
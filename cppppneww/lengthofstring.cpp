#include<iostream>
using namespace std;
#include <cstring>


int main(){
    char ch[50];
    cout<<"enter the name";
    cin>>ch;
    cout<<"enter the name"<<" "<<ch<<endl;
    int i=0;
    int count=0;
    while(ch[i] != '\0')
    {
   count = i+1;
   i++;
}
cout<<strlen(ch);
cout<<count<<endl;
}
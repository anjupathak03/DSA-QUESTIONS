#include<iostream>
#include<cstring>
using namespace std;


bool ispalindrom(char sg[]){
    int s =0;
    int e = strlen(sg)-1;
    while(s<=e)
    if(sg[s]==sg[e]){
        s++;
        e--;
        return true;
    }
    else{
        return false;
    }
    return-1;
}

int main(){
    char sg[100];
    cout<<"enter the string";
    cin.getline(sg,100);
    bool check = ispalindrom(sg);
    
    if(check==1){
        cout<<"it is a palindrom"<<endl;
    }
    else{
        cout<<"it is a not palindrom";
    }
   



}
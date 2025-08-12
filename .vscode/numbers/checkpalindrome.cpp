#include<bits/stdc++.h>
using namespace std;

//learnings
//1.dublicate krna num ko
//2.newnum = newnum*10+ans
//%= last number aana, / = last number hta k baki no

void ispalindrome( int num){
    int dub = num;
    int newnum = 0;
    while(num>0){
        int ans = num % 10 ;
        newnum = newnum*10 + ans;
        num = num/10;


    }
    if(newnum == dub){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

int main(){
    int num = 4554;
    
    ispalindrome(num);
}
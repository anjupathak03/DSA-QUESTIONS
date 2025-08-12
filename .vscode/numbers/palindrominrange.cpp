#include<bits/stdc++.h>
using namespace std;
// learnings
// 1.for loop lga kr range likho
// 2.function call koif m likho agr palindrome h to print only the palindromic no
// 3.return use kro pass krne k liye palindrom ya nhi to the function
bool ispalindrome( int num){
    int dub = num;
    int newnum = 0;
    while(num>0){
        int ans = num % 10 ;
        newnum = newnum*10 + ans;
        num = num/10;
    }
    if(newnum == dub){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int min =100;
    int max = 150;
    for(int i=min; i<max; i++){
       if( ispalindrome(i)){
        cout<<i<<" ";
       }
    }
   
}
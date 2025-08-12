#include<bits/stdc++.h>
using namespace std;
//n ko bhi include krna h for loop m
//n/i != n ye vali loop bhi lgani h
//sqrt(n) aise likhte h
//if(cnt==2) ko for loop se bhr rkho
bool checkprime(int k){
    int cnt = 0;
    for(int i =1; i<=sqrt(k); i++){
        if(k % i == 0){
            cnt = cnt+1;
            if(k % i != i){
                cnt = cnt+1;
        }
    }
    

}
if(cnt ==2){
        
    return true;
}
else{
    return false;
}

}
int main(){
    int a = 2;
    int b = 10;
    for(int k=a; k<=b; k++){

   if(checkprime(k)){

   
    cout<<k<<" ";
   } 
    // if(isPrime){
    //     cout<<"prime number";
    // }
    // else{
    //     cout<<"not prime";
    // }
}
    return 0;
}
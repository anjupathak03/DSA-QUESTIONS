#include<bits/stdc++.h>
using namespace std;
// If a year is divisible by 4 or 400 but not by 100 then it is a leap year.
bool checkperfectno(int n){
    
    if(n % 4==0 || n % 400==0 && n % 100 != 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n =1996;
   bool ans = checkperfectno(n);
   cout<<ans;
}
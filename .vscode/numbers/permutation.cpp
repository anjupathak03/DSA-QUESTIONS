#include<bits/stdc++.h>
using namespace std;

int facto(int n){
    int ans =1;
    for(int i=1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}
bool checkarm(int n, int r){
    int ans1 = facto(n);
    int ans2 = facto(n-r);
   int ans3 = ans1/ans2;
   cout<<ans3;
}

int main(){
    int n;
    int r;
   cin>>n>>r;
   checkarm(n, r);
}
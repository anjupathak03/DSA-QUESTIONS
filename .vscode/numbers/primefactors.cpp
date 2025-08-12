#include<bits/stdc++.h>
using namespace std;

vector<int> primefactors(int n){
    vector<int> arr;
    for(int i=2; i<=n; i++){
        if(n%i==0){
           arr.push_back(i);
        }
    
    while(n%i==0){
       n =  n/i;
    }
    
    }
return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int>ans =primefactors(n);
    for(auto factor:ans){
   cout<<factor<<" ";
    }
 return 0;
}
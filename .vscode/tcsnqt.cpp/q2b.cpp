#include<bits/stdc++.h>
using namespace std;
void greaterelement(char arr[], int n){

   unordered_map<char,int> mp;
   for(int i =0; i<n; i++){
    mp[arr[i]]++;
   }
   for(auto it : mp){
    if(it.second % 2 == 0){
        cout<<it.first;
        break;
    }
   }
    
    
}
int main(){
    int n; 
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   greaterelement(arr, n);
}
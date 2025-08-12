#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int n;
    char c;
   while(ss>>n){
     arr.push_back(n);
     ss>>c; //for removing comma
   }
   for(auto ele : arr){
    cout<<ele<<" ";
   }
    
}
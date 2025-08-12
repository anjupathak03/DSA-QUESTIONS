#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    while(cin>>n && n != -1){
     arr.push_back(n);
    }
    for(auto ele:arr){
        cout<<ele<<" ";
    }
}
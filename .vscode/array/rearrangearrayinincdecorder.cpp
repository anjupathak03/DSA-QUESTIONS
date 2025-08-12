#include<bits/stdc++.h> 
using namespace std;

int main(){
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    for(int i=0; i<arr.size()/2; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=arr.size()-1; i>=arr.size()/2; i--){
        cout<<arr[i]<<" ";
    }
}
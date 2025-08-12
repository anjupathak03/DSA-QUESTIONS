#include<bits/stdc++.h>
using namespace std;


void removedublicate(int arr[], int n){
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    
for(auto it : mp){
    cout<< it.first << " ";
}

}

int main(){
    int arr[] = {4, 3, 9, 2, 4, 1, 10, 89, 34};
     int n = sizeof(arr)/sizeof(arr[0]);
     removedublicate(arr, n);
     
}
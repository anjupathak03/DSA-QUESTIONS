// Given an array, we have found the number of occurrences of each element in the array.

// Example 1:
// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	 5  2
//         15  1
// Explanation: 10 occurs 3 times in the array
// 	      5 occurs 2 times in the array
//               15 occurs 1 time in the array
#include<bits/stdc++.h>
using namespace std;

void freqofelement(int arr[], int size){
    map<int, int> mp;
    for(int i=0; i<size; i++){
        mp[arr[i]]++;
        
    }
    for(auto i : mp){
        cout<<i.first<<"->"<<i.second<<" ";
    }
}

int main(){
    int arr[] = {10,5,10,15,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    freqofelement(arr, size);
}
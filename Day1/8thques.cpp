// Problem Statement: Given an array of n size, rotate the array by k elements using the Block Swap Algorithm.

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5} K=2
// Output: {3,4,5,1,2}
// Explanation: Rotate the array to right by 2 elements.

#include<bits/stdc++.h>
using namespace std;
vector<int> brr;

void blockswap(int arr[], int k, int n){
   reverse(arr, arr+n); //isme last nth element ko include nhi krte
   reverse(arr, arr+k);
   reverse(arr+k, arr+n);

   
}

int main(){
    int k =2;
    int arr[] ={1,2,3,4,5,6,7};
    int n = 7;
    blockswap(arr, k, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
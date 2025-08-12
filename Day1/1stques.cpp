//Given an array, we have to find the smallest element in the array.
/*Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. */
#include <bits/stdc++.h>
using namespace std;

int findthesmallestelement(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    
    }
    return mini;
}

int main(){
    int arr[] = {2,5,1,3,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findthesmallestelement(arr, size);
    cout<<ans;
    
}
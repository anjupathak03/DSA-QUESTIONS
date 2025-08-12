#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int k){
    sort(arr, arr+size);
    int low =0;
    int high =size-1;

    
    
    while(low<=high){
        int mid = (low + high)/2;
        if(k<arr[mid]){
          
           high = mid-1;
        }
        else if(k>arr[mid]){
            low = mid + 1;
        }
        else{
            return mid;
        }

    }
}

int main(){
    int arr[] = { 1, 2 ,3 , 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    // for(int i =0; i<size; i++){
    //     if(arr[i] == k){
    //         cout<<i;
    //         break;
    //     }
    // }
  int ans =  binarysearch(arr, size, k);
  cout<<ans;
}
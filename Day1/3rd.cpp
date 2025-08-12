// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.  

// Input: [1,2,4,7,7,5]
// Output: Second Smallest : 2
// 	Second Largest : 5
// Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2


void secondsmallestandlargest(int arr[], int size);

#include<bits/stdc++.h>
using namespace std;
void secondsmallestandlargest(int arr[], int size){
    int mini = INT_MAX;
    int smini = INT_MAX;;
    int maxi = INT_MIN;
    int smaxi = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i]<smini && arr[i] != mini){
            smini = arr[i];
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i]>smaxi && arr[i] != maxi){
            smaxi = arr[i];
        }
    }
cout<<mini<<" "<<smini<<" ";
cout<<maxi<<" "<<smaxi;

}
int main(){
int arr[] = {4,7,7,9,3,5};
int size = sizeof(arr)/sizeof(arr[0]);
secondsmallestandlargest(arr, size);
}
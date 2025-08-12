//reverse array

#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[], int size){
for(int i = size-1; i>=0; i--){
cout<<arr[i]<<" ";
}
}
int main(){
    int arr[] = {9,5,4,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    reversearray(arr, size);
}
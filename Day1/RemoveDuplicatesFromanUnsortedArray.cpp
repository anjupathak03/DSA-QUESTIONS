#include<bits/stdc++.h>
using namespace std;
void Removeduplicatefromunsortedarray(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
        if(arr[i] == arr[j]){
            arr[j] = -1; 
        } 
    }                                                             
}
for(int i=0; i<size; i++){
    if(arr[i] != -1){
        cout<<arr[i]<<" ";
     }
}
}

int main(){
    int arr[]={4,3,9,2,4,1,10,89,34};
    int size = sizeof(arr)/sizeof(arr[0]);
    Removeduplicatefromunsortedarray(arr, size);
}
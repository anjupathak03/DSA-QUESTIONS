#include<bits/stdc++.h>
using namespace std;

void insertatbeg(int arr[], int n, int element){
    for(int i=n-1; i>=3; i--){
        arr[i+1] = arr[i];
        //cout<<arr[i+1]<<arr[i];                      
    }
     arr[3] = element;                          
    
}

int main(){
    int n =5;
    int arr[6] = {1,2,3,4,5};
    int element = 6;
    
   insertatbeg(arr, n, element);
    for(int i=0; i<n+1; i++){
        cout<<arr[i]<<" ";
    }
}
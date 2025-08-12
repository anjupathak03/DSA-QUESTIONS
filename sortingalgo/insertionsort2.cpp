#include<iostream>
using namespace std;


void insertionsort(int arr[4], int n){
for(int i=1; i<n; i++){
    int j=i;
    while(arr[j]<arr[j-1] && j>=0){
        swap(arr[j-1], arr[j]);
           j--;
        
    }
}
}

int main(){
    int n =4;
    int arr[4]  = {1, 6, 5, 4};
    insertionsort(arr, n);
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
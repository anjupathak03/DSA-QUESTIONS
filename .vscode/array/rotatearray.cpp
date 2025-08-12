#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int s, int e){
    while(s<e){
        int temp = arr[s];
         arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
void rotatethearray(int arr[], int k, int n){
    k = k % n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k);
    reverse(arr, k+1, n-1);
}

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int n = 7; 
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3; 
    rotatethearray(arr, k, n);
    printarray(arr, n);
    return 0;
}
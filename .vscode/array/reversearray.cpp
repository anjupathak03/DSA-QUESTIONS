#include<iostream>
using namespace std;
void reversearray( int arr[], int n){
    int ans[n];
    for (int i=0; i<n; i++) {
        ans[n-i-1] = arr[i];
     }
     for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }
    reversearray(arr, n);
}
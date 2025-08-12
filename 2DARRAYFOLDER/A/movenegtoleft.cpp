#include<iostream>
using namespace std;




  void moveallneg(int arr[], int n){
    int l = 0;
int r = n-1; 
    while(l<r){
        if(arr[l]<0){
    l++;
}
else if(arr[r]>0){
    r--;
}
else{
    swap(arr[l], arr[r]);
    l++;
    r--;
    
}

    }
}
 int main(){
    int arr[] = { -2, -3, 4, 5, 8 , -9, -8};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveallneg(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 }
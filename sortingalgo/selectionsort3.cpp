
#include<iostream>
using namespace std;
//phlaa element pkdo, aur baki bche elements m sbse chhota dhooondho aur swap krdo
//i = for selecting first element, j for finding smallest element in remaining

 void selectionsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minelement = i;
        for(int j=i+1; j<n; j++){
            if(arr[minelement]<arr[j]){
                minelement = j;
            }
            swap(arr[minelement], arr[j]);
        }
    }
 }
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionsort(arr, n);

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 }
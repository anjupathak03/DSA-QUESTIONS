#include<bits/stdc++.h>
using namespace std;

int searchelement(int arr[], int k, int size){
    int l=0;
    int h=size-1;
   sort(arr, arr+size);
    while(l<=h){
        int m = (l+h)/2;
      if(arr[m]<k){
        l = m+1;
      }
      else if(arr[m]>k){
               
                h = m-1;
      }
      else{
         return  m;
      }
    }
   
} 

int main(){
    int arr[] = {6, 7, 9, 5, 3, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int ans = searchelement(arr, k, size); 
    cout<<ans;
}
#include<iostream>
#include<limits.h>
using namespace std;
int findmin(int arr[], int size){
    int index =0;
   
int maxi = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<maxi){
        maxi = arr[i];
          index = i;
    }
 }
   cout<<index<<endl;
  return maxi;
    
 }
int main(){

    int arr[] ={5, 2, 4, 3};
    int size =5;
    int result = findmin(arr, size);
    cout<<result;
}
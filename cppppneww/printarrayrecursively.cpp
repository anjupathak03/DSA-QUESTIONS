#include<iostream>
using namespace std;


int printarrayrecursively( int arr[], int size){
    if(size==0){
        return 0;  //1. basic condition(rukna kb h)
    }
     cout<<arr[0]<<" "; //2.processing
     printarrayrecursively(arr+1, size-1);
     //3.recursive relation
}

int main(){
    int arr[5]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int printarray= printarrayrecursively(arr, size);
}
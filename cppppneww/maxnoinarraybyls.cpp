#include<iostream>
using namespace std;

    int findmax(int size, int arr[], int max){
        for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        

    }
    return max;
    }

int main(){
    int max = -1;

   
    int arr[]={3,5,6,7,3,4};
     int size =sizeof(arr)/sizeof(arr[0]);

    if( findmax(size, arr, max)){
    cout<<findmax(size, arr, max);
    }
       
   
    return 0;
}
#include<iostream>
using namespace std;

void sortnegativenumbers(int arr[], int size){
    int l =0;
    int h = size-1;
    while(l<=h){
        if(arr[l]<0){
               l++;
        }
         else if(arr[h]>0){
               h--;
        }
        else{
            swap(arr[l], arr[h]);
            l++; h--;
        }
    }

}

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   int arr[]={1,2,-3,4,-5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    sortnegativenumbers(arr, size);
    print(arr, size);

}
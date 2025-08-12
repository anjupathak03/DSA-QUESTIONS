#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;
   
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
   int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);
    while(s<pivotindex && pivotindex<e){
     while(arr[s]<=arr[pivot]){
        s++;
     }
      while(arr[pivot]<arr[e]){
        e--;
     }
     if(s<pivotindex && pivotindex<e){
        swap(arr[s++], arr[e--]);
     }
    }
    return pivotindex;
}

 void quicksort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
     
    int a = partition(arr, s, e);
  
  quicksort(arr, s, a-1);
   quicksort(arr, a+1, e);

 }
int main(){
    int n = 9;
    int arr[9] = {9,7,6,5,3,4,2,34,5};
    quicksort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
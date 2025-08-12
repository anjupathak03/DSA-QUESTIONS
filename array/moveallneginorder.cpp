#include<iostream>
using namespace std;

void sortnegativenumbers(int arr[], int brr[], int size){
    
     int j=0;
   for(int i=0; i<size; i++){
    
    if(arr[i]<0){
        brr[j++]=arr[i];
    
    }
   }
 for(int i=0; i<size; i++){
      if(arr[i]>0){
          brr[j++]=arr[i];
       }
 }
   return;
}
print(int arr[], int brr[], int size) {
    cout << "arr: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "brr: ";
    for (int i = 0; i < size; i++) {
        cout << brr[i] << " ";
    }
    cout << endl;
}


int main(){
   int arr[]={1,2,-3,4,-5,6};
 
    int size=sizeof(arr)/sizeof(arr[0]);
     int brr[size]={};
    sortnegativenumbers(arr, brr, size);
    print(arr, brr, size);

}
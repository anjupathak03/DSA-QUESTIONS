#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int end = size-1;
    
    while(true){
        cout<<arr[end]<<endl;
          end--;
          if(end<0){
            break;
          }
    }

    return 0;
    
    
    
    
}
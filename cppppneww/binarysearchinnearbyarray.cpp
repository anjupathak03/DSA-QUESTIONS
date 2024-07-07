#include<iostream>
using namespace std;
int finde(int arr[], int size, int target){
     int s=0;
    int e=size-1;
    
    int mid = s + (e-s)/2;
while(s<=e){
    if(arr[mid]==target){
        return mid;
          }
    if(arr[mid+1]==target){
        return mid+1;
        }
        
    if(arr[mid-1]==target){
        return mid-1;
    }
    else if(arr[mid]>target){
        e=mid-2;
    }
    else{
        s=mid+2;
    }
    mid = s + (e-s)/2;
    
}
return -1;
}

int main(){
    int arr[6]={3,7,8,5,5,5};
   
    int size=6;
    int target=5;
    int element = finde(arr,size,target);
    cout<<element<<endl;
    return 0;

}
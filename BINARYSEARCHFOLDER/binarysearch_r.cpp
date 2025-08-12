#include<iostream>
using namespace std;
int size =5;
int s=0;
int e=size-1;
//int mid = s+(e-s)/2;
 int binarysearch(int arr[], int& key){
     int mid = s+(e-s)/2;
    //base condition(kb rukna h)
    if(s<=e && arr[mid]==key){
        return mid;
    }
    //recursive function(to find the element in first half)
    mid = s+(e-s)/2;
    if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    binarysearch(arr, key);


 }


int main(){
    int arr[]={10, 20, 30, 40 ,50};
    int key=40;
    int element=binarysearch(arr, key);
   cout<<element;
}
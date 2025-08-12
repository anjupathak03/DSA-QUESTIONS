#include<iostream>
using namespace std;
#include <climits> 
int max_value = INT_MIN;


int findmaxelementrecursively(int arr[], int size){
    if(size==0){
        return 0;
    }

    if(max_value<*arr){
        max_value=*arr;
    }
    cout<<max_value<<endl;

     findmaxelementrecursively(arr+1, size-1);
      return max_value;
    

}

int main(){
    int arr[]={10,30,15,21,44,26,17};
    int size = sizeof(arr)/sizeof(arr[0]);
    int findmaxelement = findmaxelementrecursively(arr, size);
    cout<<findmaxelement;
}
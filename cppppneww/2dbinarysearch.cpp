#include<iostream>
using namespace std;

int findelement(int target, int arr[][4], int r, int c){
    int start = 0;
    int end =  r * c-1;
    int ans =-1;
     
    while(start<=end){
         int mid = start+(end-start)/2;
    int ri= mid/c;
    int ci= mid%c;
        if(arr[ri][ci]==target){
           return mid ;
        

        }
        else if(arr[ri][ci]<target){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
    }
   return -1;

    }

int main(){
     int r=5;
    int c=4;
    int arr[5][4]={
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}
    };
   
  
    int target = 19;
    int element = findelement(target, arr, r, c);

    if(element==-1){
        cout<<"target not found in array"<<endl;
    }
    else{

        cout<<"element"<<" "<<target<<" "<<"index"<<" "<<element/c<<","<<element%c<<endl;

    }
    


}
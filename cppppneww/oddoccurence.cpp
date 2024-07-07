#include<iostream>
using namespace std;


int occ(int arr[], int size){
int s = 0;
int e = size-1;
int mid = s+(e-s)/2;
int ans=-1;

    while(s<=e){
       
        if(mid%2==0){
            if(mid + 1 < size && arr[mid]==arr[mid+1]){
           s = mid+2;
        
        }
        else if(mid - 1 >= 0 && arr[mid-1]==arr[mid]){
            e=mid-2;
           
        }
        else{
           ans = mid;
           break;
        }}
        else if(mid%2!=0){
            if(mid + 1 < size && arr[mid]!=arr[mid+1]){

                s=mid+1;

                ans= mid+1;
                break;


            } 
            else {
                e = mid-1;
            }
        }
        
         mid = s+(e-s)/2;
    }
    return ans;
    
    }
   
   


int main(){
    int arr[13]={0,0,2,2,4,4,6,6,8,8,7,9,9};
    int size = 13;
    int oddocc = occ(arr, size);
    cout<<arr[oddocc]<<oddocc;
    
    }





    
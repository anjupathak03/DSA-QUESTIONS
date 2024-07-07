#include<iostream>
using namespace std;
#include<vector>
int quotient(vector<int>& arr){
int devidend;
int devisor;
cin>>devidend;
cin>>devisor;
int target=devidend/devisor;
    int s = 0;
int e = arr.size() -1;

int mid=s+(e-s)/2;
    while(s<=e){
    if(arr[mid]==target){
        return mid;
    }
    else if(target<arr[mid]){
        e = mid-1;
    }
    else{
        s = mid+1;
    }
    mid=s+(e-s)/2;
   
  }
 return -1;
}

int main(){
vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int q = quotient(arr);
cout<<arr[q]<<endl;
return 0;
}



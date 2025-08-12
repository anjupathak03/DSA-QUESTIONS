#include<bits/stdc++.h>
using namespace std;

int removeduplicate(int arr[], int size){
   
       
       set<int> s;
       for(int i=0; i<size; i++){
       s.insert(arr[i]);
     }
     return s.size();
     }


int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
   int ans =  removeduplicate(arr, size);
   cout<<ans;
}
#include<iostream>
#include<vector>
using namespace std;



 void mergsortplace(vector<int> &arr, int s, int mid, int e){
    vector<int> temp;
    int l = s;
    int h = mid +1;
    while(l<=h && h<=e){
        if(arr[l]<=arr[h]){
          temp.push_back(arr[l]);
          l++;
        }
        else{
            temp.push_back(arr[h]);
            h++;
        }
    }
    while(l<h){
        temp.push_back(arr[l]);
        l++;
    }
     while(h<=e){
        temp.push_back(arr[h]);
        h++;
    }
    for(int i=l; i<=e; i++ ){
        arr[i] = temp[i];
    }
 }
 void mergsort(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s + e)/2;
    mergsort(arr, s, mid);
    mergsort(arr, mid+1, e);
     mergsortplace(arr, s, mid, e);
 }

int main(){
    vector<int> arr = {4, 3, 2, 1};
    int n = arr.size()-1;
   mergsort(arr, 0, n);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    
}
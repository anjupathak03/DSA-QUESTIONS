#include<iostream>
#include <algorithm>
using namespace std;

int minrefuling(int n, int vdis, int arr[]){
   int currc =0;
   int count =0;
for(int i=n-1; i>=0; i--){
   // cout<<arr[i]<<endl;
     //cout<<currc<<"  k1"<<" "<<endl;  
 currc = arr[i] + currc;// cout<<currc<<"  k3"<<" "<<endl;
    if(currc<vdis){
        currc = currc+vdis; //cout<<currc<<"  s2"<<" "<<endl;
         count++;
    }
    currc = currc-vdis;
    
}
return count;
}

int main(){
    int n = 4;
    int vdis = 100;
    int arr[] = {80, 120, 90, 70};
    sort(arr, arr+n);
    int sh =minrefuling(n, vdis, arr);
    cout<<sh;

    
}
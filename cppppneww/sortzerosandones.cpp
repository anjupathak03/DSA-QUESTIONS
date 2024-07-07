#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[10]={0,0,0,1,1,0,0,1,1,1};

int s = 0;
int e = sizeof(arr)/sizeof(arr[0]);

while(s<e){
    if(arr[s]==1 && arr[e]==0){
        swap(arr[s],arr[e]);

    }
    else if(arr[s]==0){
        s++;
    }
    else{
        e--;
    }
}
for(int i=0; i<10; i++){
    cout<<arr[i]<<" ";
}
return 0;
}
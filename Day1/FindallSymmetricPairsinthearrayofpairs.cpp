#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[][2] =  {{1,2},{2,1},{3,4},{4,5},{5,4}};
  int size = 5;
    for(int i=0; i<size; i++){
        for (int j = i + 1; j <size; j++) {
        if(arr[j][0] == arr[i][1] && arr[i][0] == arr[j][1]){
                cout<<arr[j][0]<<" "<<arr[i][0]<<"-"; 
                break;
        }
    }
  
}
}

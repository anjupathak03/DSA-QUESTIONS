#include<iostream>
using namespace std;


int main(){
    int arr[][2] ={{1,2}, {2,1}, {3,4}, {4,5}, {5,4}};
    int r = 5;
    int c = 2;
    //findsymmetricelement(arr, r);
    for(int i=0; i<r; i++){
        for(int j=i+1; j<r; j++){
            if(arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]){
                cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
                break;
            }
        }
    }
}
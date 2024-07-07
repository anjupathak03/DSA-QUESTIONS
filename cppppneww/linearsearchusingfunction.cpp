#include<iostream>
using namespace std;
bool keyfound(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]=key){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int arr[] = {2,3,4,5,5,9,45,0};
    int size = 8;
    int key;
    cin>>key;
    if(keyfound(arr, size, key)){
        cout<<"key is found";}
        else{
            cout<<"key is not found";
        }
    
    return 0;
}
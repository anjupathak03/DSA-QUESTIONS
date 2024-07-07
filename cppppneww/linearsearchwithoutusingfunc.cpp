#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6};
    int size = 5;
    int key = 4;

    bool flag = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
        flag =1;
         break;//key milne k bad aage iterate na kre, isliye break needed
    }

    }
    if(flag){
        cout<<"key is found";}
    
    else{
        cout<<"key is not found";}
    
return 0;
}
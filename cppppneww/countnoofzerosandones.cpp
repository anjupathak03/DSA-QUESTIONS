#include<iostream>
using namespace std;

int main(){
    int arr[] ={0,1,0,0,0,0,0,1,1,1,1,0,1,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
         int noofzero=0;
         int noofone=0;
    for(int i=0; i<size; i++){
       
    if(arr[i]==0){
        noofzero++;
    }
    if(arr[i]==1){
        noofone++;
        
    }
    

}
cout<< noofone<<endl;
cout<< noofzero<<endl;

return 0;
}
#include<iostream>
using namespace std;




int occ(int arr[5], int size, int target){
   


    int s=0;
    int e=size-1;
   
    int ans=-1;
     int mid=s+(e-s)/2;

    while(s<=e){
        

        
    if(arr[mid]==target){
        ans = mid;
        e=mid-1;
        

    }
    else if(arr[mid]<target){
        s= mid+1;
    }
    else{
        e=mid-1;
    }
        mid=s+(e-s)/2;
    
}
return ans;
}

 int missingelement(int arr[5], int size){
    int s=0;
    for(int i=0;i<size-1;i++){
    if (s+1==arr[s]){
        s++;
    }else{
        return arr[s];
    }}
}

int main(){
    int arr[7] = {1,2,3,4,5,6,8};
    int size = 7;
    int target = missingelement(arr, size);

    int firsto = occ(arr, size, target);
    if(firsto==-1){
        cout<<"target is not found"<<endl;
    }
    else{
        cout<<"target is found"<<endl<<firsto<<" ";
    }
    return 0;
}

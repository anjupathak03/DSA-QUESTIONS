#include<iostream>
using namespace std;
int findtheelement(int arr[], int element, int n){
    int count =0;
for(int i=0; i<n; i++){
    
if(arr[i]==8){
    return true;
}

}
return false;


}
int main(){
int n =4;
int arr[] = {5, 4, 1, 2};
int element = 2;
int ans = findtheelement(arr, element, n);
cout<<ans;
}
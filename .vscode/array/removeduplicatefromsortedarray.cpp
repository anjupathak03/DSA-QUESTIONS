#include<bits/stdc++.h>
using namespace std;

int removeduplicate(int arr[], int n){
    // int i=0;
    // int j = i+1;
    // while(j<n){
    //     if(arr[i] != arr[j]){
    //         i++;
    //         arr[i] = arr[j];
    //     }
    //     j++;
    // }
    // return i+1;
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    return st.size();
}

int main(){
    
    int arr[] = {1, 1, 2 , 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = removeduplicate(arr, n);
    cout<<ans;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {20, 15, 26, 2, 98, 6};
   
    for(int i=0; i<6; i++){
        set<int>st;
        for(int j=0; j<6; j++){
            if(arr[j]<arr[i]){
                st.insert(arr[j]);
            }
        }
        cout<<st.size() + 1<<" ";
    }
   

}
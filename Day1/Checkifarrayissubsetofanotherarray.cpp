#include<bits/stdc++.h>
using namespace std;


bool checkifarrayissubset(int arr1[], int size1, int arr2[], int size2){
    unordered_map<int,bool> mp;
    for(int i=0; i<size2; i++){
        mp[arr2[i]] = true;
    }
    for(int i=0; i<size1; i++){
        if(mp.count(arr1[i]) == 0 ){ // mp.count btata element exist krta h ya nhi 
            return false;
        }
       
    
}
return true;
}

int main(){
    int arr1[]= {1,3,4,5,2};
    int arr2[]= {2,4,3,1,7,5,15};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
   bool ans = checkifarrayissubset(arr1, size1, arr2, size2);
   cout<<ans;
}  
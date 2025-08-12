#include<bits/stdc++.h>
using namespace std;

bool subsetofarray(int arr1[], int size1, int arr2[], int size2){
    // second method
    // for(int i=0; i<size1; i++){
    //     bool ans = false;
    //     for(int j=0; j<size2; j++){
    //         if(arr1[i] == arr2[j]){
    //             ans = true; //break likhte hi vo j vali for loop se bhr, mtlb i k ak elemt se match hogya
    //             break;
    //         }
         
    //     }
    //     if(ans == false){
    //         return false;
    //     }
    // }
    //return true;

    
    // second method

unordered_map<int, int> mp;
for(int i=0; i<size2; i++){
    mp[arr2[i]]++;
}
for(int j=0; j<size1; j++){
    if(mp[arr1[j]] == 0){
        return false;
    }
}
return true;
}

int main(){
    int arr1[] = {1,3,4,5,2};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {4,5,2};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
   bool ansis =  subsetofarray(arr1, size1, arr2, size2);
cout<<ansis;
}

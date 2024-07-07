#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a[] = { 2, 3, 4, 5};
    int sa = 4;
    int b[] = {6, 7, 8, 9, 3, 2};
    int sb = 6;


    vector<int> ans;
    for(int i=0; i<sa; i++){
    ans.push_back(a[i]);}

   
    for(int i=0; i<sb; i++){
        
         ans.push_back(b[i]);
    } 
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


}





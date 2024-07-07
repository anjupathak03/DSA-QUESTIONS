#include<iostream>
#include<vector>
using namespace std;

int main(){
    int as=5;
    int a[] = {2,3,4,5,6};
    int bs=5;
    int b[] = {7,8,9,2,3};

    vector<int> ans; 
      for(int i=0; i<as; i++){
        for(int j=0; j<bs; j++){
            if(a[i]==b[j]){
            b[j]=-1;
        }
        }
      }
       for(int j=0; j<bs; j++){

        if(b[j]!=-1){
        ans.push_back(b[j]);
        } }
         for(int i=0; i<as; i++){
         ans.push_back(a[i]);
         }
        

      
    
  
      
 for(int k=0; k<ans.size(); k++){
        cout<<ans[k]<<" ";
      }

      return 0;
}
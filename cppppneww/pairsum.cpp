#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ae = 4;
    int a[] = {1,3,5,6};

    int be = 4;
    int b[] = {3,5,2,1};
    int s = 6;

    vector<int> ans;

    for(int i=0; i<ae; i++){
        for(int j=0; j<be; j++){
            if(a[i]+b[j]==s){
                ans.push_back(a[i]);
                ans.push_back(b[j]);
            }
        }
    }

          
 for(int k=0; k<ans.size(); k++){
        cout<<ans[k]<<" ";
      }

}
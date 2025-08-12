#include<iostream>
using namespace std;

int main(){
    string hs = "sadbutsad";
    string ne = "sad";

    int m = 9;
    int n = 3;
    

    for(int i=0; i<=m-n; i++){
        for(int j=0; j<n; j++){
          if( ne[j] != hs[i+j]){
            break;
          }

          if(j==n-1){
            cout<<i<<endl;
            return 0;
          }
           
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

void waveprintmatrix( vector<vector<int>> &s, int r, int c){
    
for(int col=0; col<c; col++){ // col same row vary  kregi
if(col%2==0){
for(int row =0; row<r; row++){
    cout<<s[row][col]<<" ";
}
}
 else{
for(int row =r-1; row>=0; row--){
                 cout<<s[row][col]<<" ";
            }
            }   
    }
   

    }
    
    
 

int main(){
    vector<vector<int>> s{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int r =s.size();
    int c =s[0].size();
    waveprintmatrix(s, r, c);
    
}
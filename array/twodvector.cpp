#include<iostream>
using namespace std;
#include <vector>

void print(const vector<int> &vect){
    for(int i=0; i<vect.size(); i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<vector<int>> vect {{1,2,3}, {4,5,7}, {7,8,9}};
    int r = vect.size();
    int c = vect[0].size();
//spiralprint(vect);
for(int i=0; i<r; i++){

print(vect[i] );
}
return 0;
}
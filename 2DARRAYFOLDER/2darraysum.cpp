#include<iostream>
#include<vector>
using namespace std;

int main(){


int arr[4][4]={{1,2,3,4}, {3,4,5,6}, {5,6,7,8}, {4,5,7,8}};
int row =4;
int col =4;
for(int i=0; i<row; i++){
     int sum =0;
    for(int j=0; j<col; j++){
       
        sum =  sum + arr[i][j];
    }
    cout<<sum<<" ";
}
return 0;
}

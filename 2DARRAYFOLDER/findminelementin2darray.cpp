#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int find(int arr[4][4],int row, int col, int key)
{ int max = INT_MAX; 
 int min =INT_MIN;
    for(int i=0; i<row; i++){
   
    for(int j=0; j<col; j++){
       
        if(arr[i][j]>min){
            min = arr[i][j];
        }
         if(arr[i][j]<max){
            max = arr[i][j];
    }
    
}

}
cout<<min<<" "<<max<< " "<<endl;
}
int main(){


int arr[4][4]={{1,2,3,4}, {3,4,5,6}, {5,6,7,8}, {4,5,7,8}};
int row =4;
int col =4;
int key =8;
find(arr, row, col, key);


return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int averageofallposno(int arr[], int size){
    float sum =0;
     int count =0;
     for(int i=0; i<size; i++){
            //sum =0;
           
    if(arr[i]>0){
        count++;
        sum = (sum +arr[i]);
        
    }
     }
     int ans = round(sum/count);
     cout<<sum<<endl;
      return ans;
    

}

int main(){
    int arr[] = {5, 2, -4, 1, 3};
    int size = 5;
   int result = averageofallposno(arr, size);
   cout<<result;

}
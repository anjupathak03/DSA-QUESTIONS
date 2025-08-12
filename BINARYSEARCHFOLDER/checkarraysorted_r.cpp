#include<iostream>
using namespace std;
 bool isarraysorted(int arr[], int& s, int i){
    if(i==s){
        return true;
        //cout<<i<<"an"<<endl;
    }
    if(arr[i]<arr[i+1]){
       i++;
      // cout<<"j"<<i<<endl;;
    }
    else{
        return false;
    }
    isarraysorted(arr, s, i);
 }


int main(){
int arr[5] = {10,20,30,40,50};
int s=5;
bool check = isarraysorted(arr, s, 0 );
cout<<check;
}
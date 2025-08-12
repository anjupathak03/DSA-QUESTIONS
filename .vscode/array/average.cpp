#include<iostream>
using namespace std;

double average(int arr[], int n){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum = arr[i] + sum;
    }
    double avg = sum/n;
    return avg;
}

int main(){
    int n = 6;
    int arr[] ={1,2,1,1,5,1};
    double ans = average(arr, n);
    cout<<ans;

}
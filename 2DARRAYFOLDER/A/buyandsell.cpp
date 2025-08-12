#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int findmaxprofit(vector<int> &arr){
    if (arr.empty()) return 0;
    int minsofar = arr[0];
    int maxelement = 0;
    for(int i=1; i<arr.size(); i++){
        minsofar = min(minsofar, arr[i]);
        maxelement = max(maxelement,  arr[i] - minsofar);
    }
    return maxelement;
 }
int main(){
    vector<int>arr = {7,1,5,3,6,4};
    int ans =findmaxprofit(arr);
    cout<<ans;
}
#include<iostream>
#include <vector>
using namespace std;

int sqrt(int n){
     int s = 0;
    int e = n;
    int mid = s+(e-s)/2;
    while(s<=e){
      
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
           mid = s+(e-s)/2;
    }
    return mid;
}




int main(){
    vector<int> arr;
    int size = arr.size();
   
    int n;
    cin>>n;
    int ans =sqrt(n);
    cout<<"ans is ans"<<ans<<endl;

   


}
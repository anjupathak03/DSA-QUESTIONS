#include <iostream>
#include <algorithm>
#include <climits> 
using namespace std;
int ans[7];
 int size=7;
    int s=0;
    int e=size-1;

int finddiff(int ans[]){

    int max= INT_MAX;

   
    for(int i=0; i<size-1; i++){
         int diff= ans[i+1]-ans[i];
        if(max>diff){
            max=diff;
        }
    }
    int lastdiff = (ans[0]+1440)-ans[size-1];//saare times ko uske next element se compare kiya h, isliye last element ko bhi next element se compare krenge, kyunki circular clock m ghoom rha h time
    if(max>lastdiff){
            max=lastdiff;
        }
        

    return max;
}
int mind(string arr[]){
    for(int i=0; i<size; i++){
   int hours = stoi(arr[i].substr(0,2));
   int mins = stoi(arr[i].substr(3,2));
   int time = hours*60+mins;
  ans[i]=time;
  }
    sort(ans, ans+size);
   
     
 return finddiff(ans) ;
}

int main(){

    string arr[] = {"10:15", "12:10","13:15", "17:20", "18:00", "19:47", "23:59"};
   
    int fmintdiff=mind(arr);
    cout<<fmintdiff<<"is min diff";
    return 0;


}
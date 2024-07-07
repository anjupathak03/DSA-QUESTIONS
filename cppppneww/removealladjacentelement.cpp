
#include<iostream>
#include<string.h>
using namespace std;

string rael(string arr){
    int s = 0;
    int l = arr.length();
    int e = l-1;
    string ans="";
 
        
        for(int i=0; i<l; i++){
             int al = ans.length(); 
             \\last element of ans

            if(ans==""){
                ans.push_back(arr[i]);
               

            }

        else if(ans[al-1]!=arr[i]){
            ans.push_back(arr[i]);
            

        }
        else{
            ans.pop_back();
        } 
}
return ans;
}
int main(){
    string arr;
    cin>>arr;
    string element = rael(arr);
    cout<<element;
    return 0;
}
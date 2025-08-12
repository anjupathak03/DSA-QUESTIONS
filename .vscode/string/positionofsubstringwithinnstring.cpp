#include<bits/stdc++.h>
using namespace std;

int posofsubstring(string input1, string input2){
    int len1 = input1.size();
    int len2 = input2.size();
    for(int i=0; i<=len1-len2; i++){
        for(int j=0; j<len2; j++){
           if(input1[i+j] != input2[j]){
            break;
           }
           if(j==len2-1){
            return i;
           }
                }
    }
    return -1;
}

int main(){
    string input1;
    string input2;
    cin>>input1>>input2;
    int ans = posofsubstring(input1,input2);
    cout<<ans;
}
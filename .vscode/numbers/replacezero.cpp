#include<bits/stdc++.h>
using namespace std;

void replacezero(int n){
    string ans = to_string(n);
    for(int i =0; i<ans.size(); i++){
        if(ans[i]=='0'){
            ans[i]='1';
        }
    }
    cout<<ans;
}

int main(){
    int n;
    cin>>n;
    replacezero(n);
}
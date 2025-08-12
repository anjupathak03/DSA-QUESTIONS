#include<bits/stdc++.h>
using namespace std;


 string findasciivalue(string ans){
    string mans = "";
    for(int i=0; i<ans.size(); i++){
    if(isalpha(ans[i])){
        mans = mans + ans[i];
      }
      else{
        continue;
      }
 }
 cout<<mans;
}

int main(){
    string str;
    getline(cin, str);
    string ans = str;
    findasciivalue(ans);
}

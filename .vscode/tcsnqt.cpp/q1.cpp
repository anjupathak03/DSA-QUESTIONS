#include<bits/stdc++.h>
using namespace std;

int counths(string s){
    int count = 0;
    int count2 =0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '*'){
            count++;
        }
        else if(s[i] == '#'){
          count2++;
        }
    }
 
    
        return count-count2;
    
}

int main(){
    string s;
    getline(cin, s);
    int ans  = counths(s);
    cout<<ans;
}
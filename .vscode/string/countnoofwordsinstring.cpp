#include<bits/stdc++.h>
using namespace std;

void noofwords(string st){
    int count =0;
    for(int i=0; i<st.length(); i++){
        if(st[i] == ' '){
           count++;
        }
    }
    cout<<count+1;
}

int main(){
    string st;
    getline(cin, st);
    noofwords(st);
}
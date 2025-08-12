#include<bits/stdc++.h>
using namespace std;

void changecase(string st){
    for(int i=0; i<st.size(); i++){
    if(st[i]>='a' && st[i]<='z'){
       st[i] = towupper(st[i]);
    }
    else if(st[i]>='A' && st[i]<='Z'){
        st[i] = towlower(st[i]);
    }
}
cout<<st;
}

int main(){
    string st;
    getline(cin, st);
    changecase(st);

}
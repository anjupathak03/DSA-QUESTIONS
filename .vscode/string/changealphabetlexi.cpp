#include<bits/stdc++.h>
using namespace std;
void changeeveryletter( string str){
    string ans ="";
    for(int i =0; i<str.size(); i++){
        int ascii = int(str[i]);
        if(str[i] == 'z'){
            str[i] = 'a';
            ans = ans + str[i];
        }
       else if(str[i] == 'Z'){
        str[i] = 'A';
        ans = ans + str[i];
        }
        else if(int(str[i])>=int('a') && int(str[i])<int('z') || int(str[i])>=int('A') && int(str[i])<int('Z')){
            str[i] = int(str[i])+1;
            str[i] = char(str[i]);
            ans = ans + str[i];
        }
    }
    cout<<ans;
}

int main(){
    string str;
    cin>>str;
    changeeveryletter(str);
}
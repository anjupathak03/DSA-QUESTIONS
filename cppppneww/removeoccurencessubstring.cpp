#include<iostream>
using namespace std;
string findp(){
    int st = 0;
    int l = s.length();
    int e = l-1;
    while(s<=e){
    for(int i=0; i<l; i++){
    if(s[st]==p[j]){
        i++;
        j++;
    }
    if(s[i+1]==p[j+1]){
        i++;
    }

else{
        st++;
    }
}
    }
}
int main (){
    string s = "daabcbaabcbc";
    string p = "abc";

    string find = string findp();
    return 0;

}

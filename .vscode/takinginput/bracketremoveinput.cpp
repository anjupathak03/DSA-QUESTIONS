#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    string input;
    getline(cin, input);
    string str = "";
    for(char ch: input){
        if(isdigit(ch)){
            str = str + ch;
        }
        else if(!str.empty()){ // jb str khali nhi h to str ko intger bnao aur khali krdo
            arr.push_back(stoi(str));
            str = "";
        }
    }
    if(!str.empty()){ // agr last digit k bad koi aur digit nhi h
        arr.push_back(stoi(str));
        str = "";
    }
    for(auto val:arr){
        cout<<val<<" ";
    }
}
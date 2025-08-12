#include<bits/stdc++.h>
using namespace std;

void firstandlastchar(string input){
    for(int i=0; i<input.size(); i++){
        if(i==0 || i==input.size()-1){
            input[i] = towupper(input[i]);
        }
        else if(input[i] == ' '){
            input[i-1] = towupper(input[i-1]);
            input[i+1] = towupper(input[i+1]);
        }
    }
    cout<<input;
}

int main(){
    string input;
    getline(cin, input);
    firstandlastchar(input);

}
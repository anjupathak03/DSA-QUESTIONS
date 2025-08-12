#include<bits/stdc++.h>
using namespace std;
void freqofchar(string input){
    sort(input.begin(), input.end());
    char ch = input[0];
    int count =1;
    for(int i=1; i<input.size(); i++){
        if(ch==input[i]){
           count++;
        }
        else{
            cout<<ch<<count<<" ";
            count = 1;
            ch = input[i]; 
        }
    }
    cout<<ch<<count<<" ";  
    }
int main(){
    string input;
    getline(cin, input);
    freqofchar(input);
}
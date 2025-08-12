#include<bits/stdc++.h>
using namespace std;

void removedublicate(string input){
bool map[26] = {false};
string str ="";
for(int i=0; i<input.size(); i++){
    if(map[input[i] - 'a'] == false){
        map[input[i] - 'a'] = true;
       // str = str + input[i];
    }
    else{
        str = str + input[i];
    }
    
}
cout<<str;

}
int main(){
    string input;
    getline(cin, input);
    removedublicate(input);
}
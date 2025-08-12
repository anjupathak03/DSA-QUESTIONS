#include<bits/stdc++.h>
using namespace std;
void freqofchar(string input){
    //sort(input.begin(), input.end());
//    for(int i=0; i<input.size(); i++){
//     for(int j =i+1; j<input.size(); j++){
//         if(input[i] == input[j] && input[i] != -1){
//             input[i] = -1;
//             input[j] = -1;
//            break;
//         }
//     }
//     if(input[i] != -1){
//         cout<<input[i]<<" ";
//     }
//    }
int freq[200]={0};
for(int i=0; i<input.size(); i++){
    freq[input[i]-'a']++;
}
for(int i=0; i<input.size(); i++){
    if(freq[input[i]-'a'] == 1){
        cout<<input[i]<<" ";
    }
}

    }
int main(){
    string input;
    getline(cin, input);
    freqofchar(input);
}
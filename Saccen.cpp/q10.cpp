#include <iostream>
#include<sstream>
using namespace std;

string findlongestword(string &sentence){
    stringstream ss(sentence);
    string word = "";
    string longestword ="";
    while(ss>>word){
        if(word.length()>longestword.length()){
            longestword = word;
        }
        
    }
    return longestword;

}
int main(){
    string sentence = "my namew is anju";
    string longestword = findlongestword(sentence);
    cout<<longestword;
}


// int main(){
//     int n =4;
//     int count =0;
//     //cout<<count<<"anju";
//     for(int i=0; i<n; i++){
       
//         for(int j=0; j<i+1; j++){
//             cout<<count +1;
//              count++;
//         }
        
//         cout<<endl;
       
//     }

// }

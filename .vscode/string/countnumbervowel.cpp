#include <bits/stdc++.h>
using namespace std;
  void calculatenoofelements(string &ans){
    int vowel =0;
    int consta =0;
    int space =0;
    for (int i = 0; i <ans.size(); i++) // converting given string to lowercase
  {
    ans[i] = tolower(ans[i]);
  }
    for(int i =0; i<ans.size(); i++){
        if(ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'o' || ans[i] == 'u' || ans[i] == 'i'){
          vowel++;
        }
        else if(ans[i]>='a' && ans[i]<='z'){
            consta++;
        }
        else if(ans[i] == ' '){
           space++;
        }
    }
    cout<<vowel<<" "<<consta<<" "<<space;
 }
int main() {
   string input;
   getline(cin, input);
   string ans = input;
     calculatenoofelements(ans);
}


#include<iostream>
#include<vector>
using namespace std;


string longestcommonprefix(vector<string>& strs){
    string ans;
    int i=0;
    
    while(true){
        char curr_char = 0;
        for(auto str:strs){
            if(i>str.size()){
                curr_char =0;
                break;
            }
            if(curr_char == 0){
                curr_char = str[i];
        }
        else if(curr_char != str[i]){
            curr_char = 0;
            cout<<"empty";
            break;
            }
    }
    if(curr_char ==0){
        break;
    }
    ans.push_back(curr_char);
    i++;
}
return ans;
}

int main(){
    vector<string> strs{"lowwer","flow","flowght"};
    string my = longestcommonprefix(strs);
    cout<<my<<" ";
    }
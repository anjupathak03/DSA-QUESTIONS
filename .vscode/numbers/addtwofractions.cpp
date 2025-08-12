#include<bits/stdc++.h>
using namespace std;

int gcd(int den1, int den2){
    for(int i = min(den1, den2); i>0; i--){
        if(den1 % i == 0 && den2 % i == 0){
            return i;
        }
    }
}
simplestform(int &lcm, int &num3){
   int gcdd = gcd(lcm, num3);
    lcm = lcm/gcdd;
    num3 = num3/gcdd;
}

int main(){
    string s;
    getline(cin, s);
    vector<int> arr;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])){
        arr.push_back(s[i]-'0');
    }
}
    int num1;
    int num2;
    int num3;
    int den1;
    int den2;
    int den3;
    for(int i =0; i<arr.size(); i++){
        num1 = arr[0];
        num2 =arr[2];
        den1 =arr[1];
        den2 = arr[3];
    }
    int lcm = den1*den2/gcd(den1, den2);
     num1 = (lcm/den1)*num1;
     num2 = (lcm/den2)*num2;
     num3 = (num1+num2);
     simplestform(lcm, num3);
    cout<<num3<<"/"<<lcm;;

}

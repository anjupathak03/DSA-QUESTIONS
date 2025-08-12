#include<iostream>
#include<vector>
using namespace std;

  string convert_dec_toNbase(int b, int n){
   string res ="";
  
    vector<int> reminder;
     int divisor = n / b; 
      reminder.push_back(n % b);
     while(divisor!=0){
    reminder.push_back(divisor % b);
    divisor = divisor / b; 
     }
   for(int i =0; i<reminder.size(); i++){
    if(reminder[i] < 0){
       res =  char( reminder[i]-9 + 64) + res;

    }
    else{
           res = to_string(reminder[i]) + res;
    }
   
  
  }
  return res;
  }

int main(){
    int b; 
    int n;
cin>>b;
cin>>n;
  string ans =convert_dec_toNbase(b, n);
    cout<<ans;
    

}
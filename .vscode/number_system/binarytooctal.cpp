#include<bits/stdc++.h>
using namespace std;

int convertbintodec(int s){
int dec = 0;
int pow =1;
while(s!=0){
    int rem = s % 10;
    s =s/10;
    dec = dec + (rem * pow);
    pow = pow*2;
   
}
 return dec;
}

int dectooct(int dec){
    int bin = 0;
    int pow =1;
    while(dec!=0){
        int rem = dec % 8;
        dec =dec/8;
        bin = bin + (rem * pow);
        pow = pow*10;
       
    }
     return bin;
    }


int main(){
    int s;
     cin>>s;
     int decimalValue = convertbintodec(s);
     int oct = dectooct(decimalValue);
     cout<<oct;


}
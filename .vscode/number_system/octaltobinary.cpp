#include<bits/stdc++.h>
using namespace std;

int convertocttodec(int s){
int dec = 0;
int pow =1;
while(s!=0){
    int rem = s % 10;
    s =s/10;
    dec = dec + (rem * pow);
    pow = pow*8;
   
}
 return dec;
}

int dectobin(int dec){
    int bin = 0;
    int pow =1;
    while(dec!=0){
        int rem = dec % 2;
        dec =dec/2;
        bin = bin + (rem * pow);
        pow = pow*10;
       
    }
     return bin;
    }


int main(){
    int s;
     cin>>s;
     int decimalValue = convertocttodec(s);
     int binary = dectobin(decimalValue);
     cout<<binary;


}
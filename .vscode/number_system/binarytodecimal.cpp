#include<bits/stdc++.h>
using namespace std;

void convertbintodec(int s){
int octal = 0;
int pow =1;
while(s!=0){
    int rem = s % 10;
    s =s/10;
    octal = octal + (rem * pow);
    pow = pow*2;
   
}
 cout<<octal;
}

int main(){
    int s;
     cin>>s;
     convertbintodec(s);

}
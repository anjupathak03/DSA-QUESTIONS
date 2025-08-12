#include<bits/stdc++.h>
using namespace std;

//max({num1,num2,num3}) or max(num1,max(num1,num2))
double checkevenodd(int a, int b, int c){
   int ans = max({a, b, c});
return ans;
}

int main(){
int a =1;
int b =3;
int c =5;
int fin = checkevenodd(a, b, c);
    cout<<fin;
}
#include<bits/stdc++.h>
using namespace std;
//learnings 1. devide kr rhe h to 2.0 lgana taki devion pt m rhe integer m na covert ho jaye
//2. abs lgana kyunki sqrt d ka nhi hota

void findsquareroot(int a, int b, int c){
    int d = b*b - 4*a*c;
    if(d>0){
        double root1 = (-b + sqrt(abs(d)))/2.0*a;
        double root2 = (-b - sqrt(abs(d)))/2.0*a;
          cout<<root1<<" "<<root2;
    }
    else if(d==0){
        double root1 = -b/2.0*a;
        double root2 = -b/2.0*a;
        cout<<root1<<" "<<root2;
    }
    else{
        cout<<-b/2.0*a<<"+i"<<sqrt(abs(d))/2.0*a<<" ";
        cout<<-b/2.0*a<<"-i"<<sqrt(abs(d))/2.0*a;
    }
}

int main(){
    int a =1;
    int b = 1;
    int c = 1;

    findsquareroot(a, b, c);
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"enter the no of elements in array a"<<endl;
    int n;
    cin>>n;
     cout<<"enter the no of elements in array b"<<endl;
    int m;
    cin>>m;

    vector<int> a(n);
     cout<<"enter elements in array a"<<endl;
    
    for(int i =0; i<a.size(); i++){
    cin>>a[i];
    }
    vector<int> b(m);
     cout<<"enter elements in array b"<<endl;
    
    for(int i =0; i<b.size(); i++){
    cin>>b[i];
    }
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i]==b[j]){
                cout<<b[j];
            }
           
        }
    }

}
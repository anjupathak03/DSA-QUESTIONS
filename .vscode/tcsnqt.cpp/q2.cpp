#include<bits/stdc++.h>
using namespace std;
void greaterelement(char arr[], int n){
    int freq[26] = {0};
    char ans;
    for(int i =0; i<n; i++){
        freq[arr[i] - 'a']++;
    }
    for(int i =0; i<26; i++){
        if(freq[i]%2 == 0 && freq[i]>0){
            ans  = char(i+'a');
            break;
        }
    }
    
cout<<ans;
    
    
}
int main(){
    int n; 
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   greaterelement(arr, n);
}
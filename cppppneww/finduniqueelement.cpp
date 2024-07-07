#include<iostream>
#include<vector>
using namespace std;



int findUnique(vector<int> arr){
  
   
    
      int ans = 0;
    for(int i=0; i<arr.size(); i++){

   ans = ans ^ arr[i];
  
  
    }
     vector<int> brr;
      brr.push_back(ans);
    for(int i =0; i<brr.size(); i++){
        cout<<brr[i];
    
}
return ans;
}
int main(){
int n;//no of elements, memory space created
cout<<"enter the no of elements"<<endl;
cin>>n;//took the no
vector<int> arr(n);
for(int i=0; i<arr.size(); i++){
    cin>>arr[i];// taking input elements one by one and putting it into arr[n]
}
int uniqueElement= findUnique(arr);
cout<<uniqueElement<<endl;

return 0;



}
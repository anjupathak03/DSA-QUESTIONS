#include<iostream>
using namespace std;

int equilibindex(int nums[], int size){
   
        
        for(int j=0; j<size; j++){
            int sum1 =0;
            int sum2=0;
            for(int i=0; i<j; i++){
                sum1 = sum1 + nums[i];
             }
             for(int i=j+1; i<size; i++){
                sum2 = sum2 + nums[i];
             }
             if(sum1 == sum2){
                return j;
             }

        }
        return -1;
    
    }


int main(){
    int nums[] = {2,3,-1,8,4};
    int size = sizeof(nums)/sizeof(nums[0]);
    int ans =equilibindex(nums, size);
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;
// void getElements(int arr[],int n)
// {
//     if(n==0 || n==1){
//         cout<<-1<<" "<<-1<<endl;
//         return;
//       }  // edge case when only one element is present in array
//     sort(arr,arr+n);
//     int small=arr[1];
//     int large=arr[n-2];
//     cout<<"Second smallest is "<<small<<endl;
//     cout<<"Second largest is "<<large<<endl;
// }
// int main()
// {
//     int arr[]={1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }

// approach second


// void getElements(int arr[],int n){
// int mini = INT_MAX; 
// int smini = INT_MAX; 
// int maxi = INT_MIN;
// int smaxi = INT_MIN; 
// for(int i=0; i<n; i++){
//     mini = min(arr[i], mini);
//     maxi = max(arr[i], maxi);
// }
// for(int i=0; i<n; i++){
//     if(arr[i]<smini && arr[i] != mini){
//         smini = arr[i];
        
//     }
//     if(arr[i]>smaxi && arr[i] != maxi){
//         smaxi = arr[i];
       
//     }


// }
// cout<<"1st="<<" "<<smini<<endl;
// cout<<"2nd="<<" "<<smaxi;
// }
// int main()
// {
//     int arr[]={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);
//     return 0;
// }

void getElements(int arr[],int n){
    int mini = INT_MAX; 
    int smini = INT_MAX; 
    int maxi = INT_MIN;
    int smaxi = INT_MIN; 
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            smini = mini;
            mini = arr[i];
           
        }
 else if(arr[i]<smini && arr[i] != mini){
            smini = arr[i];
            
        }
    }
    
        for(int i=0; i<n; i++){
            if(arr[i]>maxi){
                smaxi = maxi;
                maxi = arr[i];
            }
        else if(arr[i]>smaxi && arr[i] != maxi){
            smaxi = arr[i];
           
        }
    }
   
    
    cout<<"1st="<<" "<<smini<<endl;
    cout<<"2nd="<<" "<<smaxi;
    }
    int main()
    {
        int arr[]={1,2,4,6,7,5};
        int n=sizeof(arr)/sizeof(arr[0]);
        getElements(arr,n);
        return 0;
    }
    
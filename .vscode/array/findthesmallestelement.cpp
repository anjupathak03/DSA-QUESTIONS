#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

// int findsmallestno(int arr[], int n){
//     // sort(arr, arr+n);
//     // return arr[0];
//     int mini = arr[0];
//     for(int i=0; i<n; i++){
//         if(mini>arr[i]){
//             mini = arr[i];
//         }
//     }
//     return mini; 
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//  int element = findsmallestno(arr, n);
//  cout<<element;
    
// }

// space optimised
// void reversearray(int arr[], int n){
//     int p1 = 0; 
//     int p2 = n-1;
//     while(p1<p2){
//         swap(arr[p1], arr[p2]);
//         p1++;
//         p2--;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[] = { 1, 2 , 3 , 4 , 5};
//     int n =5;
//     reversearray(arr, n);
//     return 0;
// }
//recursive method

//Function to print array
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void printrecursively(int arr[], int s, int e ){
if(s>=e){
    return;
}

    swap(arr[s], arr[e]);
    printrecursively(arr, s+1, e-1 );


}
int main(){
    int n=5;
    int arr[] = {1, 2, 3, 4 , 5};

    
    printrecursively(arr, 0, n-1 );
    printarray(arr, n);     
    return 0;          
}
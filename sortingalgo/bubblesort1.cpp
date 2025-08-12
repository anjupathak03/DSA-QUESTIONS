#include<iostream>
using namespace std;
//bgl vale se compare krke chhota, left m, bda right m
//n-1 time krna hai kyunki ak element apne aap swap hoke aa jaiga, swap m 2 hote h na element

void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
         int swapped_once =0;
        for(int j =0; j<n-1; j++){
            if(arr[j+1]<arr[j]){
            swap(arr[j], arr[j+1]);
        }
         swapped_once = 1;
    }
     if (swapped_once==0){
            break;
        }

}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
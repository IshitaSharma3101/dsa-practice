#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    for (int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={1,2,3,14,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sorted(arr,n);
}

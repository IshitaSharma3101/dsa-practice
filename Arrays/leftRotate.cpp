#include<iostream>
using namespace std;

void leftRotate(int arr[], int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr,n);
}
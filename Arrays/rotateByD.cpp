#include<iostream>
using namespace std;

void reverse(int arr[], int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void rotateByD(int arr[], int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=2;
    rotateByD(arr,n,d);
}
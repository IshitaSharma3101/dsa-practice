#include<iostream>
using namespace std;

void move(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,0,0,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    move(arr,n);
}
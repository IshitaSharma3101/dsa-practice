#include<iostream>
using namespace std;

int removeDupli(int arr[], int n){
    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    int arr[]={3,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<removeDupli(arr,n);
}
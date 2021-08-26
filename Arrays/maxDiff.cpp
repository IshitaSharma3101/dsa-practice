#include<iostream>
using namespace std;

int maxDiff(int arr[], int n){
    int res = arr[1]-arr[0], min_val = arr[0];
    for(int i=1;i<n;i++){
        res = max(res, arr[i]-min_val);
        min_val = min(min_val, arr[i]);
    }
    return res;
}

int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxDiff(arr,n);
}
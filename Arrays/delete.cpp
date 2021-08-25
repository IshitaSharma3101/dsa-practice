#include<iostream>
using namespace std;

int deleteOp(int arr[], int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        return n;
    }
    for(int j=i;j<n-1;j++){
        arr[j] = arr[j+1];
    }
    return n-1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = 5;
    int x = 3;
    cout<<deleteOp(arr,n,x);
}
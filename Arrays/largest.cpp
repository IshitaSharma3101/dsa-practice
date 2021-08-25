#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return res;
}

int main(){
    int arr[]={10,2,7,4,55};
    int n = 5;
    int x = 3;
    cout<<largest(arr,n);
}

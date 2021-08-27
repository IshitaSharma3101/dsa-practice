#include<iostream>
using namespace std;

int majorityEle(int arr[], int n){
    int res=0, count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[res]){
            count++;
        }
    }
    if(count<=n/2){
        res=-1;
    }
    return res;
}

int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<majorityEle(arr,n);
}
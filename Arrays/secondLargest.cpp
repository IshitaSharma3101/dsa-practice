#include<iostream>
using namespace std;

int secLargest(int arr[], int n){
    int largest=0, res=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}

int main(){
    int arr[]={5,20,12,20,8};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    cout<<secLargest(arr,n);
}

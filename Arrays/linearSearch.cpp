#include <iostream>
using namespace std;

int search(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
            continue;
        }
    }
    return -1;
}

int main(){
    int arr[] = {8,4,4};
    int n = sizeof(arr)/sizeof(arr[0]), x = 4;
    cout<<search(arr,n,x);
}
#include <iostream>
using namespace std;

int search(int arr[], int n, int x, int pos, int cap){
    if(n==cap){
        return n;
    }
    int idx = pos - 1;
    for(int i=n-1; i>=idx; i--){
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
}

int main(){
    int arr[] = {1,3,4,5,7,10};
    int n = 6, x = 13, pos = 4, cap = 6;
    cout<<search(arr,n,x,pos,cap)<<endl;
}
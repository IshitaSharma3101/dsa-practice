#include <iostream>
using namespace std;

int search(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5, x = 4;
    cout<<search(arr,n,x);
}
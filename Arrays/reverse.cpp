#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int low=0, high=n-1;
    while(low<high){
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
}
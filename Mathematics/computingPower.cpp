#include <iostream>
using namespace std;

int compPower(int x, int n){
    int res=1;
    for(int i=0;i<n;i++){
        res=res*x;
    }
    return res;
}

int main(){
    int x,n;
    cout<<"enter no x and n: ";
    cin>>x>>n;
    cout<<compPower(x,n);
}
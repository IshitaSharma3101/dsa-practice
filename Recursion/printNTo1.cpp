#include <iostream>
using namespace std;

void func1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    func1(n-1);
}

int main(){
    int n;
    cout<<"enter a number : "<<endl;
    cin>>n;
    func1(n);
}
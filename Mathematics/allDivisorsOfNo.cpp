// #include <iostream>
// using namespace std;

// void allDivisors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     allDivisors(n);
// }


// EFFICIENT METHOD

#include <iostream>
using namespace std;

void allDivisors(int n){
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for( ;i>=1;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    allDivisors(n);
}
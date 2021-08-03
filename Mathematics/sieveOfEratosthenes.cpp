// PRINTS ALL PRIME NUMBERS LESS THAN OR EQUAL TO N.

// #include <bits/stdc++.h>
// using namespace std;


// void sieve(int n){
//     vector<bool> isPrime(n+1, true);
//     for(int i=2;i*i<=n;i++){
//         if(isPrime[i]){
//             for(int j=2*i;j<=n;j=j+i){
//                 isPrime[j]=false;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(isPrime[i]){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     sieve(n);
// }


// EFFICIENT IMPLEMENTATION


#include <bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<bool> isPrime(n+1, true);
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    sieve(n);
}
// ITERATIVE METHOD

// #include <iostream>
// using namespace std;

// int fac(int n){
//     int fa=1;
//     for(int i=2; i<=n; i++){
//         fa=fa*i;
//     }
//     return fa;
// }

// int main()
// {
//     int n;
//     cout<<"enter no: ";
//     cin>>n;
//     cout<<fac(n);
//     return 0;
// }

// RECURSIVE METHOD

#include <iostream>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }
    return n*fac(n-1);
}

int main()
{
    int n;
    cout<<"enter no: ";
    cin>>n;
    cout<<"rec  "<<fac(n);
    return 0;
}
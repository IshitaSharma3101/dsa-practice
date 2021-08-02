// THIS METHOD CAUSES OVERFLOW

// #include <iostream>
// using namespace std;

// int zeros(int n){
//     int fac=1;
//     for(int i=2; i<=n; i++){
//         fac=fac*i;
//     }
//     int res=0;
//     while(fac%10==0){
//         res++;
//         fac=fac/10;
//     }
//     return res;
// }

// int main()
// {
//     int n;
//     cout<<"enter no: ";
//     cin>>n;
//     cout<<zeros(n);
//     return 0;
// }

// MORE EFFICIENT METHOD

#include <iostream>
using namespace std;

int zeros(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res = res + n/i;
    }
    return res;
}

int main()
{
    int n;
    cout<<"enter no: ";
    cin>>n;
    cout<<zeros(n);
    return 0;
}
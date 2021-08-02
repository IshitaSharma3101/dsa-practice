// NAIVE SOLUTION

// #include <iostream>
// using namespace std;

// int lcm(int a, int b){
//     int res = max(a,b);
//     while(true){
//         if(res%a==0 && res%b==0){
//             break;
//         }
//         res++;
//     }
//     return res;
// }

// int main(){
//     int a,b;
//     cout<<"enter nos: ";
//     cin>>a>>b;
//     cout<<lcm(a,b);
// }

// EFFICIENT SOLUTION  


#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cout<<"enter nos: ";
    cin>>a>>b;
    cout<<lcm(a,b);
}
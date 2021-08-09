#include <iostream>
using namespace std;

int ropeCutting(int n, int a, int b, int c){
    if(n==0){
        return 0;
    }    
    if(n<0)
    {
        return -1;
    }
    int res = max(ropeCutting(n-a,a,b,c),
                max(ropeCutting(n-b,a,b,c),
                ropeCutting(n-c,a,b,c)));
    if(res == -1){
        return -1;
    }
    return res + 1;
}

int main(){
    cout<<ropeCutting(9, 2, 2, 2);
}
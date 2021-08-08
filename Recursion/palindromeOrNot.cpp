#include <string.h>
#include <iostream>
using namespace std;

bool isPal(string s, int start, int end){
    if (start>=end){
        return true;
    }
    return (s[start]==s[end]) && isPal(s, start+1, end-1);
}

int main(){
    string s;
    int n;
    cout<<"enter a string : "<<endl;
    cin>>s;
    n=s.length();
    cout<<isPal(s, 0, n-1);
}
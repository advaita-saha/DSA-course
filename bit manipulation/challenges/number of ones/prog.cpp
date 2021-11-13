/*
Count set bits
n & (n - 1) sets the first set-bit to zero.
Explanation: n = XXX100
n - 1 = XXX011
n & ( n - 1 ) = XXX000
*/
#include<iostream>
using namespace std;

int numberofones(int n){
    int count = 0;
    while(n){
        n = (n & (n-1));
        count++;
    }
    return count;
}

int main(){

    int inp;
    cin>>inp;

    cout<<numberofones(inp)<<endl;

    return 0;
}
/*
Power of two
From our past knowledge of the binary number system,
Numbers of the type 2

n have only 1 set bit.

Explanation: n = 000100
n - 1 = 000011
n & ( n - 1 ) = 000000
!( n & ( n - 1 ) ) = 000001
If the number only had one set bit, then n & ( n - 1 ) would be zero.
*/
#include<iostream>
using namespace std;

bool ispowerof2(int n){
    return (n && !(n & n-1));
}

int main(){

    int inp;
    cin>>inp;

    cout<<ispowerof2(inp)<<endl;

    return 0;
}

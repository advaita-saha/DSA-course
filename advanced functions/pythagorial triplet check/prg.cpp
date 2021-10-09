#include<iostream>
using namespace std;

bool ptCheck(int a, int b, int c){
    if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b)){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(ptCheck(a,b,c)){
        cout<<"This is a pythagorean triplet"<<endl;
    }
    else{
        cout<<"Sorry not a pythagorean triple"<<endl;
    }

    return 0;
}
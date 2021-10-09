#include<iostream>
using namespace std;

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nxtTerm;

    for(int i=1; i<=n; i++){

        cout<<t1<<endl;

        nxtTerm = t1 + t2;
        t1=t2;
        t2=nxtTerm;
    }

    return;
}

int main(){

    int n;
    cin>>n;

    fib(n);

}
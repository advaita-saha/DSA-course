#include<iostream>
using namespace std;

int main(){

    int n;
    int v=1;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<v<<" ";
            v++;
        }
        cout<<endl;
    }

    return 0;
}
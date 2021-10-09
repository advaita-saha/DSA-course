#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int org_n = n;
    int sum = 0;

    while(n>0){
        int lastDigit = n%10;
        sum += lastDigit*lastDigit*lastDigit;
        n = n/10;
    }

    if(sum == org_n){
        cout<<"Yesss!!! You found a armstrong number"<<endl;
    }
    else{
        cout<<"Nooo....Not an armstrong number"<<endl;
    }

    return 0;
}
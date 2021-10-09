#include<bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int binaryToDecimal(int n){

    int ans = 0;
    int x = 1;

    while(n>0){
        int b = n%10;
        ans += b*x;
        x *= 2;
        n /= 10;

    }
    return ans;

}

int octalToDecimal(int n){
    int ans = 0;
    int x = 1;

    while(n>0){
        int b = n%10;
        ans += b*x;
        x *= 8;
        n /= 10;

    }
    return ans;
}


int hexadecimalToDecimal(string n){
    int ans = 0;
    int x = 1;

    int s = n.size();

    for(int i=s-1; i>=0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x*(n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x*(n[i] - 'A' + 10);
        }
        x *= 16;
    }

    return ans;
}

int decimalToBinary(int n){
    int x=1;
    int ans=0;

    while(x <= n){
        x *= 2;
    }
    x /= 2;

    while(x > 0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }    
    return ans;
}

int decimalToBinary_my(int n){
    int ans=0;
    int count = 0;

    while(n>0){
        int lastDigit = n%2;
        ans += lastDigit*(pow(10, count));
        n /= 2;

        count += 1;

    }
    return ans;
}

int decimalToOctal(int n){
    double ans=0;
    int count = 0;

    while(n>0){
        int lastDigit = n%8;
        ans += lastDigit*(pow(10, count));
        n /= 8;

        count += 1;

    }
    return ans;
}

string decimalToHexadecimal(int n){
    string ans = "";

    while(n>0){
        int lastDigit = n%16;
        if(lastDigit >= 0 && lastDigit <= 9){
            ans = ans + to_string(lastDigit);
        }
        else if(lastDigit >= 10 && lastDigit <= 15){
            char c = ('A' + (lastDigit - 10));
            ans.push_back(c);
        }
        
        n /= 16;

    }
    return string(ans.rbegin(),ans.rend());
}

int main(){

    int n;
    cin>>n;

    cout<<decimalToBinary_my(n)<<endl;

    return 0;
}
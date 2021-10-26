/*
Given a string s with both uppercase and lowercase latin characters (‘a’ - ‘z’). Your
task is convert whole string into
1. Lower Case
2. Upper Case

Base idea: ‘a’ - ‘A’ = 32

1. Lowercase to UpperCase
Approach
1. Iterate over the string s and if s[i] is a lower case character, then update
s[i] -= 32

2. UpperCase to LowerCase
Approach
1. Iterate over the string s and if s[i] is a upper case character, then update
s[i] +=32
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str = "lhjabfvibeviuer";
    
    // // Convert to uppercase
    // for(int i=0; i<str.length(); i++){
    //     if(str[i] >= 'a' && str[i] <= 'z'){
    //         str[i] -= 32;
    //     }
    // }
    // cout<<str<<endl;

    // // Convert to lowercase
    // for(int i=0; i<str.length(); i++){
    //     if(str[i] >= 'A' && str[i] <= 'Z'){
    //         str[i] += 32;
    //     }
    // }
    // cout<<str<<endl;

    // --- Using in built functions ----
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;

    return 0;
}
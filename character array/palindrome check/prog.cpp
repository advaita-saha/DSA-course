/*
Palindrome: Given a string s, on reversing the string we get the same string we
call that string is a palindrome.

Algorithm:
1) Let the length of the character array be n.
2) Keep a boolean variable ans to store the result and initialize it with true.
2) Iterate over the string and check if i

th character is equal to (n-i-1)
th
, there can be

2 cases
a) If equal, then do nothing
b) If unequal, then put ans = false
3) When the loop ends, if ans is true, then the string is palindrome else it is not a
palindrome.
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = 1;

    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }


    return 0;
}
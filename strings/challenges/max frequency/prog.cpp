/*
Given a string s of latin characters, your task is to output the character which has
maximum frequency.

Approach:-
Maintain frequency of elements in a separate array and iterate over the array and
find the maximum frequency character.
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "jhabyvbyrbfuyuufbrkjbadiuvbrifb";

    int arr[26];
    for(int i=0; i<26; i++){
        arr[i] = 0;
    }

    for(int i=0; i<s.length(); i++){
        arr[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;
    for(int i=0; i<26; i++){
        if(arr[i] > maxF){
            maxF = arr[i];
            ans = i + 'a';
        }
    }

    cout<<maxF<<endl;
    cout<<ans<<endl;

    return 0;
}
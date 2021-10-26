/*
Given a string of integers, our task is to form the biggest number out of those
numbers in the string.

Approach:-
Sort the string in descending order using inbuilt sort function.
*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s = "7644209876";

    // Sorting in decreasing order will do the job
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;

    return 0;
}
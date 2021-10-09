/*
Problem:-
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.

Constraints:-
1 <= N <= 106
0 <= Ai <= 106

Example:-
Input:
7
1 5 3 4 3 5 6

Output:
2
*/
#include<iostream>
using namespace std;

int main(){

    // Inputing the length of array to be created, in which actions are to be performed
    int n;
    cin>>n;

    // Generation the array by taking user input
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // The solution to the problem 
    // Now this problem has a time complexity of n^2, which is
    // majorly not acceptable in coding exams, due to the time constraint
    int index;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] == arr[i]){
                index = i;
            }
        }
    }

    cout<<index<<endl;

    return 0;
}
/*
Challenge name : Max till i
Problem : Given an array a[] of size n. For every i from 0 to n-1
output max(a[0], a[1], . . . . . , a[i])
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

    // The output array
    int arrOut[n];
    
    // The main code
    int maxValue = INT_MIN;
    for(int i=0; i<n; i++){
        maxValue = max(maxValue ,arr[i]);
        arrOut[i] = maxValue;
    }

    // Printing the new array
    for(int i=0; i<n; i++){
        cout<<arrOut[i]<<" ";
    }
    cout<<endl;


    return 0;
}
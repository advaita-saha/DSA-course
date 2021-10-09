/*
Challenge name : Find the sum of all possible subarray
Problem : Given an array a[] of size n. Find the sum of all the elements
of all the possible subarrays from the original array
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

    // The code for the problem
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout<<sum<<endl;
        }
    }


    return 0;
}
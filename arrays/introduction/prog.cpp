#include<bits/stdc++.h>
#include<climits>
using namespace std;

// Introduction to arrays
// Declaring a array, and itering it using for loop
// Syntax
// <data_type> Name[size]
// int intArry[100];
// char charecterArray[100];

int main(){

/*     int n;
    cin>>n;

    int array[4];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    } */


    // Program to find the maximum and minimum element in an array

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i=0; i<n; i++){
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout<<minNo<<" "<<maxNo<<endl;
    

    return 0;
}
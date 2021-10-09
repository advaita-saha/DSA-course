/*
Problem: We have to find if value x is present in the 2D array.

1. While traversing in the 2D matrix, just we have to put one if statement which
checks if(a[i][j] == x) , then x is present otherwise not.
*/
#include<iostream>
using namespace std;

int main(){

    // Creating the matrix from user input
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // The program for searching a number input by user
    int x;
    cin>>x;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == x){
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    return 0;
}
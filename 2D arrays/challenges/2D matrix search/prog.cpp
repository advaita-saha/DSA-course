/*
Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Constraints
1 <= N,M <= 1,000

Sample Test Case:
Consider the following matrix:
[
[1, 4, 7, 11, 15],
[2, 5, 8, 12, 19],
[3, 6, 9, 16, 22],
[10, 13, 14, 17, 24],
[18, 21, 23, 26, 30]
]
Given target = 5, return true.

Given target = 20, return false.
*/
#include<iostream>
using namespace std;

int main(){

    // Inputing the matrix
    int n, m, target;
    cin>>n>>m>>target;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // The search algorithm

    int r=0, c=m-1;
    int found = 0;

    while(r < n and c >= 0){
        if(arr[r][c] == target){
            found = 1;
        }
        if(arr[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }
    cout<<found<<endl;
    return 0;

}
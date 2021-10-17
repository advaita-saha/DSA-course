/*

Spiral Order Matrix Traversal

Problem: We have to print the given 2D matrix in the spiral order. Spiral
Order means that firstly, first row is printed, then last column is printed,
then last row is printed and then first column is printed, then we will come
inwards in the similar way.

*/
#include<iostream>
using namespace std;

int main(){

    // Inputing the matrix
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // The algorithmn
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;

    while(row_start <= row_end && col_start <= col_end){
        // for row start
        for(int col=col_start; col <= col_end; col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        // for column end
        for(int row=row_start; row <= row_end; row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        // for row end
        for(int col=col_end; col >= col_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        // for column start
        for(int row=row_end; row >= row_start; row--){
            cout<<arr[col_start][row]<<" ";
        }
        col_start++;
    }

    

    return 0;
}
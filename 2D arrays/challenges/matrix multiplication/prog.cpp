/*
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000

Approach
1. Make a nested loop of order 3. In the outer loop iterate over rows of
the first matrix and in the inner loop iterate over columns of the
second matrix.
2. Multiply rows of the first matrix with columns of the second matrix in
the innermost loop and update in the answer matrix.
*/
#include<iostream>
using namespace std;

int main(){

    int n, m, p;
    cin>>n>>m>>p;

    int arr1[n][m];
    int arr2[m][p];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            cin>>arr2[i][j];
        }
    }

    // Algorithmn for multiplication
    int ans[n][p];
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            ans[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            for(int k=0; k<m; k++){
                ans[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    // Ouputing the loop
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}
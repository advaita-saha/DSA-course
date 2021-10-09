/*
Given two lists V1 and V2 of sizes n and m respectively. 
Return the list of elements common to both the lists and 
return the list in sorted order. Duplicates may be there 
in the output list.

Input:
n = 5
v1[] = {3, 4, 2, 2, 4}
m = 4
v2[] = {3, 2, 2, 7}
Output:
2 2 3
Explanation:
The common elements in sorted order are {2 2 3}

Your Task:
This is a function problem. You need to complete the function 
common_element that takes both the lists as parameters and 
returns a list of common elements.

Constraints:
1 ≤ n, m ≤ 10^5
1 ≤ Vi ≤ 10^5
*/
#include<iostream>
using namespace std;

// Golbal variables
const int N = 1e6+2;

// The function (The solution to the problem)
int common_element(int arr1[], int arr2[], int n, int m){

    // Creating the base list for checking
    int check[N];
    for(int i=0; i<N; i++){
        check[i] = 0;
    }

    // int n1 = sizeof(arr1)/sizeof(arr1[0]);
    // int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i] == arr2[j]){
                check[arr1[i]]++;
                count++;
                break;
            }
        }
    }

    int output[count];

    int counter = 0;
    for(int i=0; i<N; i++){
        if(check[i]>0){
            for(int j=0; j<check[i]; j++){
                //cout<<i<<" ";
                output[counter] = i;
                counter++;
            }
        }
    }
    return output;

    
}

int main(){

    // Generating the first array of size n
    int n;
    cin>>n;

    int a1[n];
    for(int i=0; i<n; i++){
        cin>>a1[i];
    }

    // Generating the second array of size m
    int m;
    cin>>m;

    int a2[m];
    for(int i=0; i<m; i++){
        cin>>a2[i];
    }

    common_element(a1, a2, n, m);

    return 0;
}
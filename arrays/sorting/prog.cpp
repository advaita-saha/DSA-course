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

/*     // Selection-Sort Algorithm
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp =arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    } */

    // Bubble-Sort Algorithm
/*     int counter=1;
    while(counter<n-1){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp =arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        counter++;
    } */

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<(n-1-i); j++){
    //         if(arr[j] > arr[j+1]){
    //             int temp =arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    // Insertion-Sort Algorithm
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }


    // Printing the sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
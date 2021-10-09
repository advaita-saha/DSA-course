#include<iostream>
using namespace std;

// program for linear search algorithm  
int linearSearch(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1; // return -1 when the key searched is not found
}

// program for binary search algorithm 
// *the elements in the array should sorted*
int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int main(){

    // Inputing the length of array to be created, in which actions are to be performed
    int n;
    cin>>n;

    // Generation the array by taking user input
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Taking the key to be searched from user
    int key;
    cin>>key;

    // Printing in the console the index at which the key is present in the array
    cout<<binarySearch(arr, n, key)<<endl;

    return 0;
}
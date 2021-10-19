/*
Pointers are variables that store the address of other variables.
Syntax : <data_type> *name_of_pointer

Getting started with the Pointers:-
Every variable is stored in the memory and each memory location has its own
memory address. It enables us to pass variables by reference.

‘&’ Operator: It gives the address of the variable.
‘*’ Operator: It gives the value stored at the address, i.e dereferences the value
stored at the address

Array Pointers:-
In C++, The name of the array is a pointer that points to the first element of the
array.

*(arr + i) is equivalent to arr[i].
(arr + i) is the address of the ith element of the array.

*/
#include<iostream>
using namespace std;

int main(){

    // int a = 10;
    // int *aptr = &a;

    // cout<<*aptr<<endl;
    // *aptr = 20;
    // cout<<a<<endl;

    int arr[] = {10, 20, 30};
    cout<<arr<<endl; 

    int *ptr = arr;
    for(int i=0; i<3; i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    for(int i=0; i<3; i++){
        cout<<*(arr+i)<<endl;
//      arr++;              // Illegal operation, arr should be an modifiable lvalue
    }

    return 0;
}
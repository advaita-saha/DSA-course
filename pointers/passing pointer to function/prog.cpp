/*
Swapping 2 variables using the address
Address of ‘a’ and ‘b’ gets interchanged, thus their values get swapped.

Passing pointer to function to manipulate a value,
which is inside the int main() function using the concept of pointers

*/
#include<iostream>
using namespace std;

void swap(int *a,int *b){
    // int temp = a;
    // a = b;           | Not going to work, as a and b are new varibles with 
    // b = temp;        | different memory address
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a = 2;
    int b = 4;

    // int *aptr = &a;
    // int *bptr = &b;

    swap(&a, &b);
    cout<<a<<" "<<b<<endl;

    return 0;
}
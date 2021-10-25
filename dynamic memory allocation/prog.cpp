/*
Stack Memory Allocation:-
The memory is allocated on the function call stack. The memory gets deallocated
as soon as the function call gets over. Deallocation is handled by the compiler.

Heap Memory Allocation:-
Allocation takes place on the pile of memory space available to programmers to
allocated and de-allocate. The programmer has to handle the deallocation.
NOTE: It is different from the heap data structure.

Dangling Pointer:-
If the memory location pointed by the pointer gets freed/ deallocated, then the
pointer is known as the Dangling Pointer.
*/
#include<iostream>
using namespace std;

int main(){

    // New Operator:
    // New operator is used to allocate a block of memory of the given data type.
    // Syntax : myPointer = new <data_type>[size];
    int *p = new int[10];

    // Delete Operator
    // To de-allocate a memory p, we pass its address to the delete() function.
    // to dealocate a memory, pointed by pointer p
    delete(p);

    return 0;
}
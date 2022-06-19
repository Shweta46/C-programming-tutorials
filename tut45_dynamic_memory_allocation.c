/*
-------------------WHAT & WHY DYANIMIC ALLOCATION--------------

1. A statically allocated variable or array has a fixed size in memory.
2. We have learnt to create big enough arrays to fit in our inputs but this doesnt seem like an optimal way to allocate memory.
3. Memory is a very useful resource.
4. Clearly we need a way to request memory on runtime.
5. Dynamic memory allocation is a way in which the size of a data structure can be changed during the runtime.

STATIC VS DYNAMIC MEMORY ALLOCATION:

1. Allocation is done before the program's execution;
Done during the program's execution.
2. There is no memory reusability and the memory allocated cannot be freed.
There is memory reusability and the allocated memory can be freed when not required.
3. It is less efficient;
It is more efficient.

---------MEMORY ALLOCATION IN C PROGRAMS:-------------
Memory assigned to a program in a typical architecture can be broken down into four segments:
1. Code -----> Text segment
2. Static/ global variables ------> stores global and static variables, Is of two types: data segment (initialized storage)
bss segment (uninitialized segment)
3. Stack
4. Heap  ---------> is dynamic memory allocation

------------------------MEMORY LAYOUT:------------------------

1. Heap


2. Stack -------> main ke start hone ke baad list of all the storage is done by stack memory. It is done according to LIFO that is last in first out. The function that enters last and returns its value, pops first and then the rest.

3. Global and static variables
4. Code


--------------------------STACK OVERFLOW--------------------------

1. Compiler allocates some space for the stack part of the memory.
2. When this space gets exhausted for some bad reason, the situation is called as stack overflow.
E.g., unending recursion function.

3. Typical example includes recursion with wrong/ no base condition.

---------------------------USE OF HEAP:---------------------------

1. There are lot of limitations of stack (static memory allocation)
2. Some of the examples include variable sized array, freeing memory no longer required etc.
3. Heap can be used flexibly by the programmer as per their needs.
4. We can create a pointer in our main function and point to a memory block in the heap.
5. The address in stored by the local variable in the main function.
6. The memory consumed will not get freed automatically in case we overwrite the pointer.

To know the size of the program you are running:
Run the program once and then type this in article:
size file_name.exe
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int ;
    
    return 0;
}

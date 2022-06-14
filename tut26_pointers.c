/*-------------------------POINTERS IN C--------------------------
1. Variable which stores the address of another variable.
2. Can be type int, char, array, function, or any other type.
3. Size depends on the architecture. E.g., 2 bytes for 32 bit.
4. Pointer in C is declared using *.

When, p points to a = p is a pointer variable
int *p = &a;
Address of operator & returns the address of a variable
'&a' : is the address of a variable which is 'a' here

--------------- * is dereference operator------------------
jisko bhi pointer point kar raha hai, uski value mil jaati hai. 
It is used to get the value at a given address.
E.g., *p = a gives the value of a and *p = &a gives the address of a 

------------NULL POINTER----------------
Pointer that isnt assigned any value but is NULL is know a NULL pointer.
In C programming, a null pointer is a pointer that does not point to any object or function.
We can use it to initialise a pointer variable when that pointer variable isnt assigned any valid memory address yet.

----------------------USE OF POINTER-------------------
- Dynamic memory location
- Arrays, functions, and structures
- Return multiple values from a function 
- Pointer reduces the code and improves the performance
*/
#include<stdio.h>
int main()
{
    int a = 76;
    int *ptr_a = &a; //points to the address of a
    int *ptr2;
    int *ptr3 = NULL;
    printf("The value of a is: %d\n", a);
    printf("The value of a is: %d\n", *ptr_a); //ismein ptr_a jisko bhi point kar raha hai, uski value aa jaegi, abhi ismein ptr_a is pointing to a so uski value aa jaegi
    printf("The address of a is: %p\n", ptr_a);
    //or for address of a
    printf("The address of a is: %p\n", &a);
    printf("The address of pointer of a is: %p\n", &ptr_a);
    printf("The address of some garbage value is: %p\n", ptr2);//gives some garbage value
    printf("The address of some garbage is: %p\n", ptr3); //returns NULL

    return 0;
}

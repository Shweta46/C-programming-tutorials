/*
--------------------POINTER ARITHMETIC IN C-------------------

Arithmetic operators that can be used in pointers:
1. ++
2. --
3. +
4. -

int *ptra = &a;
ptra = ptra + 1; --> the size of ptra 

--------------------ARRAYS AND POINTERS-------------------

int arr[10]
What is type of arr? Then we say integer. Which is correct!
arr by itself can be assigned to any pointer:
int *ptr = arr;
Then, ptr points to the first element of the array.
Tehn &arr[0] and ptr will have same value and hence are same.

arr[i]: type is int
arr[i] == *(arr + i)  
If arr is a pointer to arr[0] then arr + i is a pointer to arr[i]

So, 
arr[0] == (arr + 0) --> 1000
arr[1] == (arr + 1) --> 1004 (address value)
arr[2] == (arr + 2) --> 1008
Then, address of (arr + 32) = 1000 + 32*4 = 1128
so; Fromula = 1000 + 32* size of datatype
----------THIS ALL DEPENDS ON THE TYPE OF ARCHITECTURE--------

*/
#include<stdio.h>
int main()
{
    int a = 34;
    char b = '2';
    int *ptr_a = &a;
    char* ptr_b = &b;
    printf("%d\n", ptr_a);
    ptr_a++;
    printf("%d\n", ptr_a);
    printf("%d\n", ptr_a + 1); //adds 4 bits to the address as 1 int requires 4 bits. Similarly, if I add 2 then it will add 2*the space required by 1 int i.e, 8 bits to the ptr_a's current address
    printf("%d\n", ptr_a + 2);
    printf("%d\n", ptr_b);
    printf("%d\n", ptr_b + 1); //adds only 1 to the current address as char requires only 1 more 
    printf("%d\n", ptr_b + 2);
    printf("%d\n", ptr_b - 2);
    printf("%d\n", ptr_b++);

    int arr[] = {1,2,3,4,5,6,7,8};
    printf("array at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    //or the above statement can be written as
    printf("The address of first element of the array is %d\n", arr);

    printf("The address of second element of the array is %d\n", &arr[1]);
    // can also be written as
    printf("The address of second element of the array is %d\n", arr + 1);

    printf("The address of third element of the array is %d\n", &arr[2]);
    printf("The address of third element of the array is %d\n", arr + 2);
    
    //if we try to do this:
    // arr++; //this will show error as its a constant having the value of address of index number 0 of the array
    
    // if we 
    int *arr_ptr = arr;
    // then
    printf("I am here.\n");
    arr_ptr++; //this can happen
    printf("%d\n", arr_ptr);
// ------------------VALUE AT ADDRESSES-------
    printf("The value at address of 1st element of the array is %d\n", arr[0]);
    printf("The value at address of 1st element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", *(arr));

    printf("The value at address of 2nd element of the array is %d\n", arr[1]);
    printf("The value at address of second element of the array is %d\n", *(arr + 1));

    printf("The value at address of 3rd element of the array is %d\n", arr[2]);
    printf("The value at address of third element of the array is %d\n", *(arr + 2));
    return 0;
}
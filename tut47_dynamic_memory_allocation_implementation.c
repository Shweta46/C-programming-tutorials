/*
--------------FUNCTIONS FOR DYNAMIC MEMORY ALLOCATION IN C:-------

In dynamic memory allocation, the memory is allocated at runtime from heap segment.
We have four functions that help us achieve this task:
-----------------1. malloc----------------------

a. It stands for memory allocation.
b. It reserves a block of memory with the given amount of bytes.
c. The return value is a void pointer to the allocated space.
d. Therefore, the void pointer needs to be caste on the appropriate type as per the requirements.
e. However, if the space is insufficient inside the heap, allocation of memory fails and it returns a NULL pointer.
f. All the values at allocated memory are initialized to garbage values.

Syntax:
ptr = (ptr-type*) malloc(size-in-bytes)

E.g., int*ptr;
ptr = (int *) malloc(3*sizeof(int))

-----------------2. calloc----------------------

a. Stands for contiguos memory allocation.
b. It reserves 'n' blocks of memory with the given amount of bytes.
c. The return value is a void pointer to the allocated space.
d. Therefore, the void pointer needs to be caste to the appropriate type as per the requirements.
d. However, if the space is insufficient, allocation of memory fails and it returns a NULL pointer.
e. All the values at allocated memory are initialized to 0;

Syntax:
ptr = (ptr-type*) calloc(n, size_in_bytes)

E.g.,
int *ptr;
ptr = (int*) calloc(16, sizeof(int))

-----------------3. relloc----------------------

a. It stands for reallocation.
b. If the dynamically allocated memory is insufficient we can change the size of previously allocated memory using realloc() function

Syntax:
ptr = (ptr-type*) realloc(ptr, new_size_in_bytes)
E.g.,
ptr = (ptr-type*) realloc(ptr, new_size_in_bytes)


-----------------4. free----------------------

a. It is used to free the allocated memory.
b. If the dynamically allocated memory is not required anymore, we can free it using free function.
c. This will free the memory being used by the program in the heap.

Syntax:
free(ptr)

*/
#include <stdio.h>
#include <stdlib.h> //enables to use malloc, realloc, and calloc
int main()
{
    /*USE OF MALLOC
    int *ptr, n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(10 * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value no %d of this array is %d \n",i, ptr[i]);
        // scanf("%d", &ptr[i]);
    }
    */


    /* USE OF CALLOC
    */
    int *ptr, n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value no %d of this array is %d \n",i, ptr[i]);
        // scanf("%d", &ptr[i]);
    }
    

    /*
    USE OF REALLOC:
    */
    // int *ptr, n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);
    ptr = (int *) realloc(ptr, n * sizeof(int)); //dynamic allocation of memory so we dont have to define a bigger array and then fill it, this expands with our usage
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value no %d of this array is %d \n",i, ptr[i]);
        // scanf("%d", &ptr[i]);
    }
    free(ptr);
    
    return 0;
}
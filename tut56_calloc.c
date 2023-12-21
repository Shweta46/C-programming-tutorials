// Calloc: It initializes the memory with nulls unlike malloc which doesnt. Uninitialized memory contains junk which can be accidentally used in program.

#define _CRT_SECURE_NO_WARNINGSE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *s1, *s2;
    s1 = (char*) malloc(6); //the syntax is different, malloc takes in only one argument which is the bytes of the memory to hold all the data

    // the above statement is same as the code below given that the data type used in char since it uses only 1 byte of data

    // s1 = (char*) malloc(6 * sizeof(char)); 
    
    s2 = (char*)calloc(6, sizeof(char)); 
    // It takes two arguments, the number of elements in the array and the size of the element
    
    for(int i = 0; i < 6; i++) printf("s2[%d] = %d\n", i, s2[i]);
    free(s2);

    // Once memory is allocated, its no longer available to the rest of the program. So, if we continue to allocate chunks of memory, we are eventually going to run out of memory. This is essential when we are using C to program small machines. Or it will just using the memory inefficiently. 

    // WHen there is memory still allocated even when its not needed, that is when its not pointed to by any of the pointers, creates MEMORY LEAKS.
    
    // So, its a good practice to deallocate memory to make it available again for use in the program.  

    // This is done by calling the free function.

    printf("\n");
    
    for(int i = 0; i < 6; i++) printf("Malloc: s1[%d] = %d\n", i, s1[i]);

    int* p;
    p = (int*)calloc(6, sizeof(int));

    for(int i = 0; i < 6; i++) printf("p[%d] = %d\n", i, p[i]);
    
    free(p);

    return 0;

    // The output should be 0 for each of the variables here for p and s2 since we are using calloc
    

}
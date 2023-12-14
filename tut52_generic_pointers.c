// Generic Pointer: It is a pointer to void and is used when data type of the pointer isn't defined. This can be used in cases where same pointer is used to point to multiple data types.


// To use this, we need to first cast the GP to a specific data type.

#include<stdio.h>

#define LENGTH 4

int data[LENGTH];
char* word[LENGTH];

int main()
{
    void *gp;
    printf("\nGeneric pointer:\n");

    for(int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }

    for(int i = 0; i < LENGTH; i++)
    {
        printf("%d\n", data[i]);
    }

    word[0] = "zero";
    word[1] = "one";
    word[2] = "two";
    word[3] = "three";
    
    for(int i = 0; i < LENGTH; i++)
    {
        printf("%s\n", word[i]);
    }
    // gp pointing to the integer array
    gp = data; 
    //since "data" here points to the starting address of the array, we assign this to gp to make it point to the array first
    printf("\nData array address is: %p\n", gp);
    printf("\nItem pointed to by GP is: %d\n", *(int*)gp);
    
    // making the pointer point to the next item in the string
    gp  = (int*)gp + 1;
    printf("\nNext item pointed to by GP is: %d\n", *(int*)gp);


    printf("\nMaking the gp point to the string now:\n");
    gp = word;
    printf("\nData array address is: %p\n", gp);
    printf("\nItem pointed to by GP is: %s\n", *(char**)gp);
    // The typecasting of string is done like this because a string is an array of array of chars, as each string is an array of chars. 
    // So the cast should be a pointer to a pointer to a char. 

    // making the pointer point to the next item in the string
    gp  = (char**)gp + 1;
    printf("\nNext item pointed to by GP is: %s\n", *(char**)gp);


    printf("\n\n");
    return 0;
}

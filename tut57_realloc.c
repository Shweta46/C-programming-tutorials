#define _CRT_SECURE_NO_WARNINGSE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    // REALLOC: 
    // Used when we want to change the size of the block of allocated memory. 

    char *s;
    int i;
    i = sizeof("hello"); //ALLOCATING only limited memory to s
    s = (char*) malloc(i);
    strncpy(s, "hello worl", i); //giving it a larger string to hold despite its small size
    printf("s is %s\n", s); //should not print the whole string

    realloc(s, 12); //reallocating more size to the string s
    strncpy(s, "hello", i);
    strcat(s, " world");
    printf("s is now %s\n", s);

    free(s);
    return 0;
}
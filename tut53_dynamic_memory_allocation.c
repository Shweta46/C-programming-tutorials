#include<stdio.h>
#include<string.h>
#include<malloc.h>

#define MAXSTRLEN 100

char *string_function(char *string)
{
    char* s;
    s = (char*) malloc(MAXSTRLEN); //assigning 100 bytes of memory to each character to the pointer, as char* is used here
    s[0] = 0; //initialising the string to null
}

int main()
{
    printf(string_function(" Fred"));
    printf(string_function(" Somed"));
    return 0;
}
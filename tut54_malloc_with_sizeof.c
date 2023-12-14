#define _CRT_SECURE_NO_WARNINGSE

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    // If I need a larger string, whose size is larger than 100 bytes, then it wont be sufficient. Or if the sring is of smaller size, then it will be wasting of memory. 


    // FOR THAT:
    // We use sizeof()

    char *s1;
    int stringsize = sizeof("hello");

    printf("\nSize of hello is: %d\n", stringsize);

    s1 = (char*)malloc(stringsize);

    if(s1 == NULL)
    {
        printf("The sizeof failed\n");
        exit(0);
    }
    // now, copying the string into the newly allocated memory
    strncpy(s1, "hello", stringsize);
    // we can change the first variable of s if we want 
    printf("\ns1 is %s\n",s1);
    s1[0] = 'c';
    printf("\nThe new string is now: %s\n", s1);
    return 0;
}


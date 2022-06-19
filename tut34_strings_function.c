/*

Strings are NULL terminated array.
<stdio.h> is used to implement printf, scanf, gets, etc functions.

----------------<string.h> library in C:--------------------

1. strcat() : Its a function used to concatenate or combine two given strings
E.g., strcat("Hello", "World");

2. strlen() : Used to show the length of a string
Is null character also counted in the length? No. 

3. strrev() : used to show reverse of a string

4. strcpy() : used to copy one string into another
E.g., strcpy(s2, s1) --> copies s1 to s2

5. strcmp() : used to compare two given strings
It gives the ASCII difference between the first uncmatching characters of two strings.
E.g., strcmp("Sold", "Tight"); 
If the string matches, then it returns 0. Sometimes, the value can be negative value as well.


*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    // puts(strcat(s1, s2)); //concatenation function
    char s3[54]; 
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s1 is %d\n", strlen(s2));
    printf("The reverse string of s1 is: \n");
    // puts(strlen(s2)); 
    puts(strrev(s1)); //prints the reverse of s1
    puts(strrev(s2)); //prints the reverse of s1
    
    // s3 = strcat((s1, s2)); //not possible
    strcpy(s3, strcat(s1, s2)); //can do it like this instead
    puts(s3);

    //again reverse the strings
    printf("\n");    
    puts(strrev(s1));
    printf("\n");
    puts(strrev(s2));
    // char s
    printf("The strcmp for s1, s2 %d: ", strcmp(s1, s2)); //
    
    return 0;
}
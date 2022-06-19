/*
Enter user to enter two strings and then concatenate these by stating that s1 is a friend of s2
Make a third string and 
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[80], s2[80], s3[160];
    printf("Enter the name of first friend:\n");
    gets(s1);
    printf("Enter the name of second friend:\n");
    gets(s2);
    printf("%s is the friend of %s\n", s1, s2);
    strcpy(s3, strcat(s1, s2));
    puts(s3);
    return 0;
}
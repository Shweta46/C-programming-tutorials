/*
Input:
<h1> This is a heading </h1>
Output:
This is a heading.

Input a string and extract the inner string of the content of the string not including the starting and ending spaces.

*/

#include<stdio.h>
#include<string.h>

void parser(char string[]){
    int len;
    gets(string);
    len = strlen(string);
    printf("%d\n", len);
    for (int i = 4; i < len - 5; i++)
    {
     printf("%c", string[i]);
    }
    
}
int main()
{
    char string[150];
    // Input the HTML code line for header
    parser(string);
    return 0;
}


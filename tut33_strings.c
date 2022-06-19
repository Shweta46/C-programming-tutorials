/*
-----------IS STRINGS A DATA TYPE IN C?------------

NO IT IS NOT.
1. We have char, int, float, and other data types but no 'strings' data type in c.
2. String is not supported data type in C but it is very useful concept used to model real world entities like name, city, etc.
3. It is created by creating an array of characters.
We express strings using an array of characters terminated by a null character ('/0').
4. Whenever it is encountered, that means the string has terminated. 
character array should be of length to accomodate characters is (length + 1).

-------------CREATING STRINGS IN C--------------
char name[] = "Harry";
char name[] = {'h', 'a', 'r', 'r', 'y', '\0'};

--------TAKING STRING INPUT FROM THE USER----------

char str[52];
gets(str);
printf("%s", str); or puts(str); //for printing

*/

#include<stdio.h>
void printstr(char str[]){
    int i=0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    
}
int main()
{
    char str[] = {'h', 'a', 'r', 'r', 'y'}; //is it a valid string? NO
    char str2[] = {'h', 'a', 'r', 'r', 'y', '\0'}; //is it a valid string? YES as it has \0 at the end
    printstr(str2);
    return 0;
}
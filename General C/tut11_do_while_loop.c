/*
Syntax:
1. do {
    //code to be executed
} while condition

2. do {
    i = i+1;
    printf("%d", i);
} while (i<10);

Important:
do while loop executes atleast once.


*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, index2 = 0, index = 0; // initialising index with 0
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        // printf("%d\n", index);
        printf("%d\n", index2 + 1); // in case you want the number to print from 1 and not 0
        //here, index + 1 doesnt increase the index throughout, just increases the index for the printing part of the program
        index2 = index2 + 1;
    } while (index2 < num);
    printf("Now the condition wasnt met\n");
    return 0;
}
// the program prints numbers till the number becomes less than the num value we input
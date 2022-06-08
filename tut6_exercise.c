#include<stdio.h>
/*
Print a multiplication table of a user entered by the user in pretty form
Example: 
Enter the number you want the mulitiplication table of 
Output
Table of 6
*/
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want the multplication table of\n");
    scanf("%d", &a);
    printf("%d X 1 = %d\n", a, a*1);
    printf("%d X 2 = %d\n", a, a*2);
    printf("%d X 3 = %d\n", a, a*3);
    printf("%d X 4 = %d\n", a, a*4);
    printf("%d X 5 = %d\n", a, a*5);
    printf("%d X 6 = %d\n", a, a*6);
    printf("%d X 7 = %d\n", a, a*7);
    printf("%d X 8 = %d\n", a, a*8);
    printf("%d X 9 = %d\n", a, a*9);
    printf("%d X 10 = %d\n", a, a*10);
    return 0;
}

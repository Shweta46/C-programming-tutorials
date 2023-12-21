#include<stdio.h>
int main()
{
    int i, j, k;
    j = 0;
    for ( i = 0; i <= 5; i++)
    {
        printf("Number %d\n", i);
        scanf("%d", &k);
        // j = j + i;
        j = j+k;
    }
    printf("Sum of the number is %d\n", j);
    printf("Average is %d\n", j/i);
    return 0;
}


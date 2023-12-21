#include <stdio.h>
int main()
{
    int i, n, p, x;
    printf("Enter the rows you want in the pattern");
    scanf("%d", &n);
    printf("Enter 1 for triangular start pattern and \n0 for reverse one\n");
    scanf("%d", &p);
    switch (p)
    {
    case 1:
        for (i = 0; i < n+1; i++)
        {
            for (int j = n; j > n-i; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 0:
        for (int i = 0; i < n; i++)
        {
            // printf("inside\n");
            for (int j = 0; j < n - i; j++)
            {
                // printf("inside\n");
                printf("*");
            }
            printf("\n");
        }
        
    default:
        break;
    }

    return 0;
}
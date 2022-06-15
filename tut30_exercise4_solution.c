#include<stdio.h>
void star_pattern(int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }      
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    star_pattern(rows);
    return 0;
}
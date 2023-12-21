#include<stdio.h>
#define LENGTH 4
int data[LENGTH];
int main()
{
    int *pi;
    int **ppi; //pointer to the pointer
    printf("Multiple indirection:");

    for(int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }

    for(int i = 0; i < LENGTH; i++)
    {
        printf("%d\n", data[i]);
    }

    pi = data;
    ppi = &pi;

    for(int i = 0; i < LENGTH; i++)
    {
        printf("i = %d, data = %p\n", i, data);
        printf("*pi = %d\n", *pi);
        printf("*ppi = %p\n", *ppi);
        printf("**ppi = %d\n", **ppi);
        printf("&pi = %p, ppi = %p\n", &pi, ppi);
        pi += 1;
        printf("\n");
    }

    printf("\n\n");
    return 0;
}
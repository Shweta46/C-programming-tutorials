#include <stdio.h>
int main()
{
    int *p;
    int a[] = {100,200,300,400};
    p = a; // making the pointer point to the first location of array
    printf("Value = %p, Address = %p\n\n", &a, a); 
    for (int i = 0; i < 4; i++)
    {
        printf("Value = %d, Address = %p\n", *p, p);
        p = p + 1;
    }
}
#include<stdio.h>

#define LENGTH 3

int data[LENGTH];

int main()
{
    int *pi;
    int **ppi;
    
    printf("Multiple indirection example:\n");
    
    for(int i = 0; i < LENGTH; i++)
    {
        data[i] = i;
    }
    
    for(int i = 0; i <LENGTH; i++)
    {
        printf("%d\n", data[i]);
    }
    
    pi = data;
    ppi = &pi;
    
    for(int i = 0; i < LENGTH; i++)
    {
        printf("Array address is: %p\n", data);
        printf("Item pointed to by pi is %d\n:", *pi);
        printf("Item pointed to by ppi is: %p\n", *ppi);
        printf("Item pointed to by double indirection of ppi is: %p\n", **ppi);
        printf("The address of pi is: %p and the value of ppi (what it points to) is: %p\n\n", &pi, ppi);

        pi += 1; //to move to the next pointer 

//Q. Why does increasing pointer by 1 byte simply takes us to the next element of the array? how does it know that the next element is of the size of type of data that fits into the array?

//Ans. 


    }

    return 0;
}
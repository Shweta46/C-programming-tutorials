#include<stdio.h>

#define COUNT 4

int main()
{
    int *p;
    int a[COUNT];
    
    printf("Size of an 'int' is %d\n", sizeof(int));
    for(int i = 0; i < COUNT; i++) a[i] = i;

    p = a;

    printf("Address of a is %p; value of p is %p [%d]; value pointed to by p is %d\n", a, p, p, *p);

    p += 1;
    printf("Address of a is %p; value of p is %p [%d]; value pointed to by p is %d\n", a, p, p, *p);

    p += 2;
    printf("Address of a is %p; value of p is %p [%d]; value pointed to by p is %d\n", a, p, p, *p);

    p += 1;
    printf("Address of a is %p; value of p is %p [%d]; value pointed to by p is %d\n", a, p, p, *p);
    
    //Q. Why does increasing pointer by 1 byte simply takes us to the next element of the array? how does it know that the next element is of the size of type of data that fits into the array?

    //Ans. This is because, when I first declared the array, the program knows that all the other elements in the array are of the same data type which I first declared it with which is integer, so it knows that all the other data in the array will of int type. So, if I increase it with 1, it moves to the next data type. 

    return 0;
}
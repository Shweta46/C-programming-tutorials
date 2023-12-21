#include<stdio.h>
typedef struct {
    int a; // 4 bytes
    int c; // 4 bytes
    double b; //8 bytes
    long long int d; //8 bytes
} MYSTRUCT; //total size = 24 bytes

#define COUNT 4

int main()
{
    MYSTRUCT *p, *q;
    void *v;
    printf("Size of MYSTRUCT = %d\n", sizeof(MYSTRUCT));

    // p = (MYSTRUCT*) calloc(COUNT, 24); //this allocation of 24 bytes to the struct wont work
    // this is correct if I order my data types correctly in the struct, but wont work for ANY order, it will stop executing.
    //this is because data type alignment is C is specific and changes according to the data type used in the struct. 
    //So, always use sizeof function instead of directly allocating bytes.

    p = (MYSTRUCT*)calloc(COUNT, sizeof(MYSTRUCT));

    for(int i = 0; i < COUNT; i++)
    {
        p[i].a = i;
        p[i].b = 100000000.0 + 1;
        p[i].c = i * 20;
        p[i].d = 429467296 + i;
    }
    
    q = p;
    printf("[0] values: \na is %d\nb is %f\nc is %d\nd is %lld\n", q->a, q->b, q->c, q->d);

    printf("Addresses:\na is %p\nb is %p\nc is %p\nd is %p\n", &q->a, &q->b, &q->c, &q->d);

    q = p + 3;
    printf("[0] values: \na is %d\nb is %f\nc is %d\nd is %lld\n", q->a, q->b, q->c, q->d);

    printf("Addresses:\na is %p\nb is %p\nc is %p\nd is %p\n", &q->a, &q->b, &q->c, &q->d);
}
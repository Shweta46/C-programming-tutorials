#include<stdio.h>
void sub_and_add(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y - *y;
}
int main()
{
    int a = 5, b  = 3;
    printf("The value of a is %d and b is %d\n", a, b);
    sub_and_add(&a, &b);
    printf("The addition value is %d and substration is %d\n", a, b);
    return 0;
}
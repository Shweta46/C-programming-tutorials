#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b; //variable declaration
    printf("Enter number a\n");
    scanf("%d", &a);//takes value from user like input in python
    //&a means address of a 
    //%d specifies the type of variable as decimal and %i specifies the type as integer
    printf("Enter number b\n");
    scanf("%d", &b);    
    printf("Sum is %d\n", a+b);
    return 0;
}
 
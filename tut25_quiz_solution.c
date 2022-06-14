#include<stdio.h>
int fib_iterative(int n){
    int a = 0;
    int b = 1;
    
    return 0;

}
int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci series at position number %d is %d using iterative approach.\n", number, fib_iterative(number));

    return 0;
}
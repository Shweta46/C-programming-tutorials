#include <stdio.h>
#include<stdlib.h>
int fibonacci(int number)
{
    if (number == 1 || number == 0)
    {
        return number;
    }
    else
    {
        return (fibonacci(number - 1) + fibonacci(number - 2));
    }
}
int iterative(int number)
{
    int a, b, c;
    printf("0 1 ");
    a = 0;b = 1;
    for (int i = 2;i < 42;i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter the number you want the fibonacci of:\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, fibonacci(num));
    iterative(num);
    return 0;
}
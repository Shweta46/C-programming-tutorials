/*
-----------------------RECURSION FUNCTION------------------
1. It is a process when a function calls a copy o itself to work on a smaller problem.
2. Any function which calls itself is called recursive function.
3. This makes the life of programmer easy by dividing a given problem into easier ones.
4. A termination condition is imposed on such functions to stop them from executing copies of themselves forever.
5. Any problem that can be solved recursively, can also be solved iteratively.

---------------------WHY RECURSIONS------------------
Any problem that can be solved iteratively can also be solved recursively. However, some problems are best suited to be solved using recursion. For e.g., tower of hanoi, fibonacci series, factorial finding, etc.

-----------EXAMPLE 1: FACTORIAL CALCULATION----------------
1. The case at which the function doesnt recure is called the base case.
2. The instances where the function keeps calling itself to perform a subtask, is called a recursive case.
3. For factorial calculation the base case occurs at the parameter value of 0 and 1 both of whose factorial is 1.
*/
#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of:\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));

    return 0;
}

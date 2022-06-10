/*
Why use for loop?
1. It is used to iterate statements or a part of the program several times
2. It is used to transverse the data structures like the arrays and linked lists
3. It has a difficult syntax than while and do while loops

Syntax
for(intialization; condition check 1st after the expression 1 and then after the 3rd expression; expression after the loop ends){
    //code to be executed
}

E.g.,
int i = 0;
for (i = 0; i<5; i++){
    printf("%d\n", i);
}

--------------------Property of Expression 1:----------
The expression represents the initialization of the loop variable. We can initialize more than one variable in expression 1. Expression 1 is optional.

--------------------Property of Expression 2:----------
1. It is a conditional expression. It checks for a specific condition to be specified. If it is not, the loop is terminated.
2. It can have more than one condition. However, the loop will iterate until the last condition becomes false. Other conditions will be treated as statements.
3. It is also optional. So, goes on infinite times. For this, we use break statement.
4. It can perform the task of expression 1 and 3. That is, we can initialize the variables as well as update the loop variable in expression 2 itself
5. We can pass zero and non-zero value in expression2. However, in C, any non-zero value is true and zero is false by default
--------------------Property of Expression 3:----------
1. It is used to update the loop variable.
2 .We can update more than one variable at the same time.
3. It is also optional.
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 5; i++) // prints numbers from 0 to 4
    {
        printf("%d\n", i);
    }

    for (i = 0, j = 0; i < 5; i++) // intialisation using two variables
    {
        printf("%d %d\n", i, j); // j is always zero
    }

    i = 0;
    for (; i < 5; i++) // first expression not necessary if the variable is already initialized
    {
        printf("%d\n", i);
    }

    i = 0;
    for (; i < 5, j < 3; i++) // terminates when the last condition, that is j<3 is false
    {
        printf("%d %d\n", i, j);
        j++;
    }

    // but
    for (; j < 3, i < 5; i++) // the loop goes on until the last statement becomes false, it also updates the value of j to 3 then 4 so in expression 2, only the last statement is considered as condition and rest is considered statement
    {
        printf("%d %d\n", i, j);
        j++;
    }
    // OR
    i = 0;
    for (; j = 3, i < 5; i++) // makes j =3 throughout but updates the value of i upto 5
    {
        printf("%d %d\n", i, j);
    }

    i = 0, j = 0;
    for (i = 0; i < 5; i++, j++)
    {
        printf("%d %d\n", i, j);
    }
    i = 0, j = 0;
    for (i = 0; i < 5;) // 3rd expression being optional
    {
        printf("%d %d\n", i, j);
        i++, j++;
    }

    return 0;
}

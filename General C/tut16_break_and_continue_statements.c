/*
---------------------BREAK STATEMENT---------------------
1. It is used to bring the program control out of the loop.
2. It is used inside loops or switch statement.

--------------------CONTINUE STATEMENT---------------------
1. It is used to bring the program control to the next iteraton of the loop.
2. When it appears, the pointer skips code inside the loop and continues with the next iteration.
3. It is mainly used for a condition so that we can skip some lines code for a particular condition.
*/
#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 10; i++) //the program lets you fill your age until 10 tries or until you enter an age > 10
    {
        // printf("%d\nEnter your age\n", i);
        // scanf("%d", &age);
        // if (age>10)
        // {
        //     break;
        // }

        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        if (age>10)
        {
            continue; //if age is >10 then continue is run and the pointer goes to next iteration
        }
        printf("We have not come across any continue statements");
    }
    return 0;
}

/*
Also, called jump statement, it is used to transfer program control to a predefined label.
Its use is avoided since it causes confusion to the fellow programmers in understanding the code
Goto statement is preferable when we need to break multiple loops using a single statement at the same time.
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    // label:
    //     printf("we are inside label\n");
    //     goto end;
    // printf("Hello World\n");
    // goto label; //becomes infinite label
    // end:
    //     printf("We are at end\n");
    for (int i = 0; i < 8; i++)
    {
        
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number and enter 0 to exit\n");
            scanf("%d", &num);
            if (num==0)
            {
                goto end;
                // break; 
            }
            
        }

    }
    end:
    return 0;
}

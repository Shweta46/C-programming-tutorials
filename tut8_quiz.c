#include<stdio.h>
#include <string.h>
int main()
{/*
    int maths, maths_and_science, science;
    printf("Please write 1 before the subjects you have passed to accept the award\n");
    printf("Only Maths?");
    scanf("%d", &maths);
    printf("Maths and Science?");
    scanf("%d", &maths_and_science);
    printf("Only Science?");
    scanf("%d", &science);
    if (maths == 1 && maths_and_science == 0 && science == 0)
    {
        printf("You are awarded 5000 Rupees!");
    }
    else if (science == 1 && maths == 0 && maths_and_science == 0)
    {
        printf("You are awarded 5000 Rupees!");
    }
    else if (maths_and_science == 1 && science == 0 && maths == 0)
    {
        printf("You are awarded 15000 Rupees!!");
    }
*/
    char maths2[30], maths_and_science2[30], science2[30];
    printf("Please write Yes before the subjects you have passed to accept the award\n");
    printf("Only Maths?");
    scanf("%s", &maths2);
    printf("Maths and Science?");
    scanf("%s", &maths_and_science2);
    printf("Only Science?");
    scanf("%s", &science2);
    if (strcmp(maths2, "Yes") == 0)
    {
        printf("You are awarded 5000 Rupees!");
    }
    else if (strcmp(science2, "Yes") == 0)
    {
        printf("You are awarded 5000 Rupees!");
    }
    else if (strcmp(maths_and_science2, "Yes") == 0)
    {
        printf("You are awarded 15000 Rupees!!");
    }
    return 0;
}

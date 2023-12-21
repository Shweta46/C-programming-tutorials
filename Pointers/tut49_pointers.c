#include<stdio.h>
int main()
{
    char str1[] = "Hello";
    char *str2 = "Goodbye.";
    str2 = &str1;
    printf("%d %p %s\n", &str1, str1, str1);
    printf("%d %p %s\n", &str2, str2, str2);

    int a[] = {100, 200, 300};
    printf("\n%d", a);
    printf("\n%d", &a);

    printf("\n\n");
    return 0;
}
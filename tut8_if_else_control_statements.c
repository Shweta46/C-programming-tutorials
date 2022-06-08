/*
It is used to perform operations based on some conditions
Types:
1. if statement
2. if else 
3. if-else if ladder
4. Nested if

Syntax for if else:
if(3>2){
    printf("This will execute");}
else if() 
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age>=18)
    {
        printf("You can vote!");
    }
    else if (age>10)
    {
        printf("You are between 10 to 18 and you can vote for kids.");
    }
    
    else{
        printf("You cannot vote.");
    }
    return 0;
}

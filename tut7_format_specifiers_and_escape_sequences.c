/* 
--------------------FORMAT SPECIFIER------------------
It is a way to tell the compiler what type of data is in a variable during taking input displaying output to the user
e.g., %d, %f, %a.bf prints the var with b decimal points in a 'a' character space. e.g., %0.7f gives decimal points upto 7
----Remember it---------------
%c - character
%d - integer
%f - floating point number
%l = long integer
%lf - double
%Lf - long double

-----------------------CONSTANTS----------------------
It is value or variable that cant be changed in the program for e.g., 15, 23, 'a', 3.4, "hermione is good"

There are two ways to define constants in C:
- constant keyword
- #define preprocessor

----------------ESCAPE SEQUENCES------------------
It is a sequence of characters, it doesnt represents itself when used inside the string literal or character
It is composed of two or more characters starting with backslash. E.g., \n, \a, \b, \t, \\, \", etc.


*/
#include<stdio.h>
#define PI 3.14 //this is how to define a constant, no need for semicolons here and equal sign
int main(int argc, char const *argv[])
{
    int a = 8;
    float b = 7.33; 
    const d = 8; //we are telling the compiler that it is a constant and dont change its value in the program
    //d = 7.22; //this shows error as d is a constant
    //PI = 7.33; //shows error as we defined it as a constant before
    printf("%f\n", PI); //prints the value of PI that we have defined as constant for the whole program
    printf("The value of a is %d and the value of b is %f\n", a, b);
    printf("%8.4f", b);//8.4 means 8 offset is given before the decimal 
    printf("%-8.4f this\n", b);//gives character space of 8 after the decimal point number is run out
    printf("My tab \t \n My backslash \\\n"); //backslash can be printed in the form "\\"
    printf("\a"); //produces beep or alarm sound
    return 0;
}

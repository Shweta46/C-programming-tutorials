/*
user the extension Code runner to make the program run smoothly in VS

--------------------OPERATOR-------------------------
It is a symbol used to perform operations in given programming language
Helps in performing operations in between variables

-------------------Types---------------
1. Arithmetic operator:
+, -, *, /, %

2. Relationa Operator
==, !=, <, >, >=, <=

3. Logical Operator
&&: iff both values are true then it returns true, 
||: if these two operands is non-zero or 1, then is becomes true or 1. 
! : like not gate

4. Bitwise Operator
&(AND), | (OR), ^(XOR), ~, <<, >>, etc.
operates only in binary values
for 2&3, the operation goes like this: 
e.g., 2 = 10
      3 = 11
      -------
      2 = 10  
      --------
Operation takes place bitwise

5. Assignment Operator
=, +=, -=, *=, /=, etc
assigns value from right side operands to left side operand

6. Miscellaneous Operators
sizeof(), & - address operator, *, ?: - condition operators, etc.
*/
#include<stdio.h>
int main()
{
    int a = 34, c= 2, d = 0, e = 3, f = 9;
    float b;
    b = 6.34;
    printf("a + b= %f\n", a+b);
    printf("a - b= %f\n", a-b);
    printf("a * b= %f\n", a*b);
    printf("a / b= %f\n", a/b);
    printf("a == b = %d\n", a==b); //shuould return 0 as they are not equal
    //the identifier here should be %d and not %d 
    printf("a && b = %d\n", a&&b); //any integer value is considered true, so it returned True or 1
    printf("a && d = %d\n", a&&d); //returns 0 as d is 0
    printf("a || d = %d\n", a||d); //returns True as atleast one of them is 1
    printf("c & e = %d\n", c&e); //output is 2
    printf("c | e = %d\n", c|e); //returns 3
    printf("c ^ e = %d\n", c^e);
    
    return 0;
    //here %d needs to be replaced with %f in order to include a float value
}
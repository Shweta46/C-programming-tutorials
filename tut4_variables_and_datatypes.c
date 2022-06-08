/*Flow of C program: Preprocessing, compilation, Assembly, linking, and loading
-------------------Variable----------------------- 

It is a name given to a memory location, declared by "type variable_name"
it is initialised by "type variable_name = value"
e.g., int a, b, c, d; and initialisation e.g., int a=5;

------Rules for defining a variable in C:
can contain alphabets, digits, and underscore
can start with alphabet and underscore only
no whitespace and reserved keywords is allowed

--------------------DATA TYPES--------------------

basic ones are: int, char, float, double
derived data type : array, pointer, structure, union
enumeration data type: emum
void data type: void

Each data type has different sizes according to the no. of bits of architecture


*/
#include<stdio.h>
int main()
{
    printf("%lu", sizeof(int));
    return 0;
}
//this prints 4 defining that int is taking 4 bytes

/* 
--------------------BASIC OPERATIONS AND FUNCTIONS------------
printf("%d", 3+7);
scanf("%d", &a); this makes the user take input and stores it in variable a that we would have defined before
sizeof()
if we define a function: f(a,b) = a^2 + b^2
f(1,1)= 2

*/

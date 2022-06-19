/*
--------------------LOCAL VARIABLE--------------------

1. Scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed.
2. Variables which are accessed inside a function or a block are called local variables.
3. They can only be accessed by the function they are declared in.
4. They are inaccessible to the functions outside the function they are declared in.

-------------------GLOBAL VARIABLES-------------


1. These are variables defined outside the main method
2. These are accessibe throughout the entire program from any function.
3. If a local and global variable has the same name, the local variable will take preference.

-----------------------FORMAL ARGUMENTS---------------

1. These variables are treated as local variables with-in a function.
2. These variables take precedence over global variables.

-----------------STATIC VARIABLES IN C:-----------------

1. Static varibales have a property of preserving their values even when they go out of scope.
2. They preserve their value from the previous scope and are not initialized again.
3. These remains in memory throughout the span of the program. Not good as occupies space even if not used throughtout the program.
4. These are initialized to 0 if not initialized explicitly.
5. In C, static variables can only be initialized using constant literals.

Syntax:

static data_type name = value;
E.g., static int harry = 7;

func1(){
    static int a1 = 5; //the value remains 6 intact as the a1++ made its value 6 when the function was run before so it stays 6 and the next code line just appends that value to 7
    a1++;
    return a1;
}
int main(){
    a = func1();
    printf("%d", a); //prints 6
    a = func1(); //calling the function again
    //prints 7
}

*/
#include <stdio.h>
int b = 34; // global variable
int func1(int b)
{
    // printf("The address of b inside func1 is %d\n", &b);
    printf("The value of b inside func1 is %d\n", b); // this prints the local variable value of b which is passed through an argument and is 344 even though we declared it globally as well.
    return b * 10;
}

int func2(int b1)
{
    printf("The value of b inside the func2 is %d\n", b); // since here we dont have b as an argument so it will print the global value of b which is 34
    return 0;
}

int func3(int b2)
{
    // static int myvar = 0;
    
    static int myvar; // if we dont initialize the value of myvar, it defaults initializes to 0
    
    // static int myvar = ret(); //it cant do this, the literals that it passes must be a constant
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    return b2 + myvar;
}
int ret()
{
    return 43*34;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b); //address will be different from the one in func1
    // int val = func1(b);
    // int val2 = func2(b);
    int val3 = func3(b);
    val3 = func3(b); // prints the value of myvar as 1
    val3 = func3(b); // prints the value of myvar as 2
    val3 = func3(b); // prints the value of myvar as 3
    val3 = func3(b); // prints the value of myvar as 4

    // int *ptr = &val;
    // printf("The value of func1 is %d\n", val);
    // printf("The value of func1 is %d\n", val2);

    return 0;
}

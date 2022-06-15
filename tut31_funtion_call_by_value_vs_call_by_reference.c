/*
--------------ACTUAL AND FORMAL PARAMETERS-----------
When a function is called, the values that are passed in the call are called arguments or actual parameters.

In the example below, x and y are actual parameters.

E.g., int add(int a, int b){
                return a+b;
                }
        int main(){
            int x = 2, y =3;
            add(x, y);
        }

FORMAL PARAMETERS are local variables which are assigned values from the arguments when the function is called.
In the above example, a and b are formal parameters or local variables.

----------TYPES OF FUNCTION CALLS IN C PROGRAMMING----

Based on how we specify the arguments, there are two ways to call a function:
---------1. Call by value---------
When we call a function by value, it means that we are passing the values of the arguments which are copied into the formal parameters of the function. 
Which means the original values or the actual parameters remain unchangeed and only the parameters inside the function changes.

E.g., 
int function(int a){

}
int main(){
    func1(x);
    }

---------2. Call by reference------
In this method, the function copies the address of the arguments into the formal parameters.
The addresses of the actual arguments are copied and then assigned to the corresponding formal arguments.
E.g., 
int func1(int *a){
    //operations can be done using pointers and can change the actual parameters.
    return 0;
}

int main(){
func1(&a);
}

*/
/*
#include<stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x; //save the value at address x
    *x = *y; //put y into x
    *y = temp; //put temp into y
    return;
}
int main()
{
    int a = 34, b =76;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);
    return 0;
}
*/

#include<stdio.h>
void change_value(int *address){
    *address = 354;
}
int main()
{
    int a = 34, b =76;
    printf("The value of a is %d\n", a);
    change_value(&a);
    printf("The value of a is %d\n", a);
    return 0;
}
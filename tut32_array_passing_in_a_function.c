/*
-----------------WHY AND HOW TO PASS ARRAYS?------------
We pass arrays to a function when we need to pass a list of values to a given function.
We can pass the arrays to a function:
1. By declaring array as a parameter in the function
E.g., int func(int arr[]){
for(i = 0; i < n; i++){
    sum = sum + arr[i];
}
return sum/s;
}

int main(){
    int arr[] = {1, 2, 3};
    int av = func(arr);
}

Inside func, if you change the value of array, it gets reflected in the main function. 

2. By declaring a pointer in the function to hold the base address of the array
E.g., int avg(int *ptr){
    *(ptr)   --> 1
    *(ptr+1) --> 2
    *(ptr+2) --> 3
}

int main(){
    int arr[] = {1, 2, 3};
    avg = func(arr);
    return 0;
}

*/
#include<stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", array[i]); //prints the values of the array
    }
    array[0] = 389; //this changes the actual parameter in the main function and is reflected in its local variable
    
    return 0;
}

void func2(int *ptr){
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]); //prints values of the array
        //or
        printf("%d\n", *(ptr + i)); //prints values of the array
    }
    *(ptr + 2) = 6534; //value change using the index pointer, this changes the value at index 2 i.e., element 3
}
void func3(int arr3[][3]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Value at %d, %d is %d\n", i, j, arr3[i][j]);
        }
        
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7};
    int arr2[] = {21, 32, 43, 54, 65, 76};
    int arr3[][3] = {{1, 0, 9}, {2, 4, 6}};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    func2(arr2);
    func2(arr2);
    printf("Multidimensional array starts here...\n");
    func3(arr3);
    return 0;
}
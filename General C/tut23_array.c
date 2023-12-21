/*
------------------------ARRAY-----------------------------
1. An array is a collection of data items of the same type.
2. Items are stored at contiguos memory locations. Meaning that the items are stored serial wise in memory locations.
3. It can also store the collection of derived data types, such as pointers, structures, etc.
4. A 1-D array is like a list.
5. A 2-D array is like a table.
6. The C language places no limits on the number of dimensions in an array.
7. Some texts refer to one-dimensional arrays as vectors, 2D arrays are matrices and use the general term arrays when the number of dimensions is unspecified or unimportant.

-------------------WHY USE ARRAYS?-----------------------
1. Code that use arrays is sometimes more organized and readable.
2. If you were to store marks in a test of 56 students, creating 56 variables will make program look cluttered and messy.
3. Solution to this is arrays!
4. We can create arrays of integers and store the consecutive marks corresponding to the roll number in the array.

-----------------ADVANTAGES OF ARRAYS-------------------
1. It is used to represent multiple data items of same type by using only single name.
2. Accessing an item in a given arrays is very fast
3. 2D arrays make it easy in  mathematical application as it is used to represent a matrix.

-----------------DISADVANTAGES OF ARRAYS-------------------
1. Poor time complexity of insertion and deletion operation.
2. Wastage of memory since arrays are fixed in size.
3. If there is enough space present in the memory but not in contiguous form, you will not be able to initialize your array.
4. Its not possible to increase the size of an array once you have declared the array.

*/
#include<stdio.h>
int main()
{
    int marks[4];
    int student[4] = {45, 3, 5, 6}; //called declaration with initialization
    int attendance[2][4] = {{3, 5, 6, 2}, {0, 1, 2, 3}};
    marks[0]=34;
    for (int i = 0; i < 4; i++) //this lets you enter the values in the array without having to write the code over and over
    {
        printf("Enter the value of %d element of the arrays\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++) //prints all the value of the elements inside the array 
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }
    for (int i = 0; i < 4; i++) //prints the value of students directly
    {
        printf("The value of %d element of the array is %d\n", i, student[i]);
    }

//two loops to access elements in a 2D array of [2][4] size.
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d, %d element of the array is %d\n", i, j, attendance[i][j]);
            printf("%d ", attendance[i][j]);
        }     
        printf("\n"); //prints the output as a matrix properly
    }
    
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[0]=54;
    // marks[1]=89;
    // marks[2]=73;
    // marks[3]=56;
    // printf("marks of student 1 is %d\n", marks[0]);
    return 0;
}

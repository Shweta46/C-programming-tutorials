#include<stdio.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std; //this is defining the alias name of the whole structure named "Student"

int main()
{
    int* a, b; //here a is a pointer and b is integer
    int c;
    typedef int* intptr; //now we renamed the whole int * as pointer
    //then
    intptr e, d;

    //So
    e = &c;
    a = &c;
    b = c;
         
    /* SYNTAX
    typedef <previous_name> <alias_name>; //helps in giving alternative names to the existing datatype
    */
   struct student s1, s2;
   //can also be written as
   std s3, s4;
   s1.marks = 56;
   s3.id = 99;
   printf("Value of s1's id is: %d\n", s1.id);
   printf("Value of s2's id is: %d\n", s2.id);
   printf("Value of s3's id is: %d\n", s3.id);
   printf("Value of s1's marks is: %d\n", s1.marks);
   typedef unsigned long ul; //meaning whenever I write ul it means I am defining unsigned long datatype
    ul l1, l2, l3;
    typedef int integer;
    integer a = 4;
    printf("%d", a);


    return 0;
}
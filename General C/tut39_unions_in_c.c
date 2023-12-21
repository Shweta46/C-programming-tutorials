/*
Very similar to structures.

------------------WHAT IS UNION?-------------------

1. Union is a user defined data type. The difference between structures and unions lies in the fact that in structure, each member has its own storage location, whereas members of a union uses a single shared memory location.
2. This single share memory location is equal to the size of its largest data number.

The allocation of memory in structures is more than the union as union uses a shared memory location. 
This is meant for programs in which only one member stays active and others are dormant. 

-----------DECLARING AND ACCESSING UNION MEMBERS:------

1. Like structures, we access any member by using the member access operator(.) in unions.
2. We use keyword union to define a union.
3. Syntatx is very similar to structure.

------UNION CANNOT HANDLE ALL THE MEMBERS AT ONCE SINCE IT HAS SHARED MEMORY LOCATION.------

QUIZ: 
--- test{
    int a;
    float b;
    char c;
};

What will be the memory of above program if it is structure and when it is union?
Ans. 4+4+1 = 9 bytes when it is structure
max(4, 4, 1) = 4 bytes when it is a union

*/
#include<stdio.h>
#include<string.h>

// struct student
union student
{
    int id;
    int marks;
    char fav_char;
    char fav_course[60];
    char name[50];
}; 

int main()
{
    // struct student s1, s2;
    union student s1, s2;
    s1.id = 1;
    s1.marks = 98;
    strcpy(s1.fav_course, "Astrophysics");
    s1.fav_char = 'c'; //the last one declared comes in correctly when union is used and the rest are distorted

    printf("The ID is %d \n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav character is %c \n", s1.fav_char);
    printf("The fav course is %s \n", s1.fav_course);
    return 0;
}
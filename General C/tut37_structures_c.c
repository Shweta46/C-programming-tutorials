/*
-----------------------STRUCTURES IN C:---------------------

1. Structures are user defined data types in C.
2. Using structures allows us to combine data of different types together.
3. It is used to create a complex data type which contains diverse information.
4. They are very similar to arrays but structure can store data of any type

E.g., storing employee information
Suppose we want to store information of 10,000 employees working at some corporation.
The information contains Name, address, email, employee ID of each employees. We cant make arrays for every employees. Its not a feasible way to do it.
We need some user defined data type which contains only this information.

---------------------DEFINING A STRUCTURE--------------

struct [structure name]
{
    //data_type var 1
    //data_type var 2
    //data_type var 3
}
[structure_variables];

Can be done by two types:
1. Declare a structure along with structure definition:

#include<stdio.h>
struct Employee
{
    int id;
    char name[53];
    float marks;
};

struct Employee e1, e2;
int main()
{
    return 0;
}

2. Declare a structure separately:

#include<stdio.h>
struct Employee
{
    int id;
    char name[53];
    float marks;
} e1, e2;

int main()
{
    struct Employee tt; //optional
    return 0;
}

---------------------INITIALIZING A STRUCTURE--------------

Can be done by two ways:
1. Initialize a structure along with structure definition

#include<stdio.h>
struct Employee
{
    int id;
    char name[53];
    float marks;
};

int main()
{
    struct Employee e1; //optional
    e1.id = 12;
    e2.marks = 34.12;
    return 0;
}


2. Initialize a structure separately from structure definition

#include<stdio.h>
struct Employee
{
    int id;
    char name[53];
    float marks;
};

int main()
{
    struct Employee e1 = {12, 34.12};
    return 0;
}


------------ACCESSING STRUCTURE MEMBERS:--------------

1. Array elements are accessed using subscript variable.

2. In a similar fashion, structure members are accessed using dot[.] operator.
E.g., e1.id = 23; e1.marks = 34;

3. (.) is called as "Structure member operator".

4. To access the member of the structure, we use this operator in between "Structure name" & "Member name".


*/

#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char fav_course[60];
    char name[50];
}; 
//champak, lala, suresh; //the variables can be defined like this also

struct student Hermione, Ron, Draco; //defining the name variables as global

// void print(){
    // printf("%s", harry.name); //this function is able to access the variable harry since its declared globally
// }

int main()
{
    struct student Harry, Ravi, Shubham; //this is defining them as local variable
    Harry.id = 1;
    Ravi.id = 2;
    Shubham.id = 3;
    Harry.marks = 46;
    Ravi.marks = 500;
    Shubham.marks = 466;
    Harry.fav_char = 'p';
    Ravi.fav_char = 's';
    Shubham.fav_char = 't';
    
    Hermione.id = 56;
    strcpy(Hermione.name, "Hermione Granger");
    Hermione.marks = 600;
    Hermione.fav_char = 'R';
    strcpy(Hermione.fav_course, "Wizards and Their Pets");

    // Harry.name = "Harviner kaur"; //cant do it like this, it will show error
    strcpy(Harry.name, "Harvinder Kaur");

    printf("Harry got %d marks \n", Harry.marks);
    printf("Harry's full name is %s \n", Harry.name);
    // print();
    printf("Student ID %d:\n", Hermione.id);
    printf("Student Name %s:\n", Hermione.name);
    printf("Student Marks %d:\n", Hermione.marks);
    printf("Student Favourite course %s:\n", Hermione.fav_course);
    return 0;
}
// Quiz: Print all the information of a given student 


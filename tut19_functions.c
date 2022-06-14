/*
-------------------------------FUNCTION--------------------------------
These are used to divide a large C program into smaller pieces.
It is called multiple times to provide reusability and modularity to the program.
Also called procedure or subroutine.

---ADVANTAGES----------------
1. Can avoid rewriting same logic through functions.
2. Can easily work among programmers using functions.
3. Can easily debug a program using functions.

Syntax:
void print_name(){
    //content
}
Void means the function doesnt return anything at the end.

-----------------Declaration, definition, and Call:------------
A function is declared to tell a compiler about its existence.
A function is defined to get some task done.
A function is called in order to be used.

--------------Types of Function------------------------------
1. Library functions - functions included in c header files
2.  User defined functions - functions created by programmer to reduce complexity of a program

-----------------------FUNCTION CODE EXAMPLES-------------------------
1. Without arguments and without return value

int sum(int a, int b){
    return a+b;
}
main
int a = 1, b =2, c;
c= sum(a,b);

2. Without arguments and with return value
3. With arguments and without return value
4. With arguments and with return value
*/

// 1. With arguments and with return value
// #include<stdio.h>
// int sum(int a, int b){
//     return a+b;
// }
// int main()
// {
//     int a = 9, b = 87, c;
//     c = sum(a, b);
//     printf("%d", c);
//     return 0;
// }

// or declare function first and then defined it later
//  #include<stdio.h>
//  int sum(int a, int b);
//  int main()
//  {
//      int a = 9, b = 87, c;
//      c = sum(a, b);
//      printf("%d", c);
//      return 0;
//  }
//  int sum(int a, int b){
//      return a+b;
//  }

// 2. with argument without return value
//  #include<stdio.h>
//  void printstar(int n)
//  {
//      for (int i = 0; i < n; i++)
//      {
//          printf("%c", '*');
//      }
//  }

// int main()
// {
//     int n, i;
//     printstar(7);
//     return 0;
// }

// 3. Without argument with return value
// #include <stdio.h>
// int takenumber()
// {
//     int i;
//     printf("Enter a number\n");
//     scanf("%d", &i);
//     return i;
// }

// int main()
// {
//     int c;
//     c = takenumber();
//     printf("The number entered is %d", c);
//     return 0;
// }

// 4. Without argument without return value
#include<stdio.h>
int takenumber()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    printf("The number entered is %d", i);
    // printf("%d", i);
}

int main()
{
    int c;
    takenumber();
    return 0;
}
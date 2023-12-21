#include<stdio.h>
// Typecasting: Helps in converting from one type to another type of datatype
// (type) value
int main()
{
    int a=3;
    float b = (float)54/5; //changed the 54 integer value to float to make the output have accurate decimal values
    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of b is %d\n", (int) b); //we have typecaste b as int, so it wont print any decimal points

    return 0;
}

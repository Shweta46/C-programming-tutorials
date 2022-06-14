#include <stdio.h>
int conversion_km_to_miles(double num)
{
    double c;
    printf("The measurement %lf km to miles is %lf\n", num, 0.621371 * num);
    c = 0.621371 * num;
    return c;
}
int conversion_inches_to_foot(double num)
{
    double c;
    printf("The measurement %lf inches to feet is %lf\n", num, 0.0833 * num);
    c = 0.0833 * num;
    return c;
}
int conversion_cm_to_inches(double num)
{
    double c;
    printf("The measurement %lf cm to inches is %lf\n", num, 0.39370 * num);
    c = 0.39370 * num;
    return 0;
}
int conversion_pound_to_kg(double num)
{
    double c;
    printf("The measurement %lf pounds to kgs is %lf\n", num, 0.45359237 * num);
    c = 0.45359237 * num;
    return 0;
}
int conversion_dollar_to_inr(double num)
{
    double c;
    printf("The currency %lf dollar to inr is %lf\n", num, 78.14 * num);
    c = 78.14 * num;
    return c;
}
int choice()
{
    int num;
start:
    printf("Do you want to convert something again?\nIf yes then press 1 and if no press 0\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        main();
        break;
    case 0:
        break;
    default:
        printf("Please enter a valid response...\n");
        goto start;
    }
}

int main()
{
    int j, i;
    double num;
    printf("Welcome to the CONVERTER!!!\n");
label:
    printf("Please enter number against the conversion you want to achieve..\n");

    // for (i = 1; i > 0; i++)
    // {
    printf("1 =  km to miles\n");
    printf("2 =  inches to feet\n");
    printf("3 =  cm to inch\n");
    printf("4 =  pound to kg\n");
    printf("5 =  dollar to inr\n");
    scanf("%d", &j);
    printf("Entered choice is %d\n", j);
    switch (j)
    {
    case 1:
        printf("Enter the measurement you want to convert\n");
        scanf("%lf", &num);
        conversion_km_to_miles(num);
        choice();
        break;
    case 2:
        printf("Enter the measurement you want to convert\n");
        scanf("%lf", &num);
        conversion_inches_to_foot(num);
        choice();
        break;
    case 3:
        printf("Enter the measurement you want to convert\n");
        scanf("%lf", &num);
        conversion_cm_to_inches(num);
        choice();
        break;
    case 4:
        printf("Enter the measurement you want to convert\n");
        scanf("%lf", &num);
        conversion_pound_to_kg(num);
        choice();
        break;
    case 5:
        printf("Enter the measurement you want to convert\n");
        scanf("%lf", &num);
        conversion_dollar_to_inr(num);
        choice();
        break;
    default:
        printf("Please enter a valid option\n");
        goto label;
        break;
    }
    return 0;
}
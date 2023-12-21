/*
You manage a travel agency and you want your drivers to input the following details. 
1. Name
2. Driving license number
3. Route 
4. Distance travelled
Your program should be able to take n as input and your drivers will start entering their details one by one. 
Can be n = 3 that is take input from 3 drivers.

Your program should print details of the drivers in a beautiful fashion.
Use structures.

*/
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[50];
    int driving_license_number;
    int Route;
    char distance_travelled[60];
}; 
int main()
{
    char str[100];
    char j[10];
    struct employee dri[100];
    int index=0;
    int arr[100], n;
    printf("Enter the number of drivers who want to input their information:\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        index++;
        printf("Information for employee %d :\n", index);
        printf("Please enter the name of the driver:\n");
        j[i] = gets(str);
        strcpy(dri[i].name, j[i]);
        printf("%s", dri[i].name);
        printf("Enter the driving license number:\n");
        scanf("%d", dri[i].driving_license_number);
        printf("Enter the route:\n");


    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    
    return 0;
}
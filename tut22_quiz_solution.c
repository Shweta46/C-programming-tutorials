#include<stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    float kmtomiles = 0.621371;
    float inchestofeet = 0.0833333;
    float cmstoinches = 0.393701;
    float poundstokgs = 0.453592;
    float inchestometers = 0.0254;
    while (1)
    {
        printf("Enter the input characte. q to quit\n1. kms to miles\n2. inches to feet\n3.cms to inches\n4.pound to kgs\n5. inches to meters\n");
        scanf("%c", &input);
        switch (input)
        {
        case 'q':
        printf("Quitting the program...\n");
        goto end;
            break;
        case '1':
        break;
        case '2':
        break;
        case '3':
        break;
        case '4':
        break;
        case '5':
        break;
        default:
            break;
        }
    }
    end:
    
    return 0;
}

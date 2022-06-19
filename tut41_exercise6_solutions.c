#include<stdio.h>
#include<string.h>
void parser(char *string){
    int in = 0, index = 0;
    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    //Remove the trailing spaces as well from the begining
    while (string[0] == ' ')
    {
        for (int i = 0; i < len; i++) //this is for shifting the string by one space
        {
            string[i] = string[i+1]; 
        }
        
    }
    while (string[strlen(string) - 1] == ' ') //this is making the last character of the string null if it is space i.e., " "
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>     This is a header file     </h1>";
    parser(string);   
    printf("The parsed string is ~~%s~~\n", string);
    return 0;
}
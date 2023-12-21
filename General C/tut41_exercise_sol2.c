#include <stdio.h>
#include <string.h>

int main()
{
    int j,k,l ;
    int a=0;
    char html[32] = "<h1> This is a heading     </h1>";
    // printf("%d", strlen(html));
    for (int i = 0; i < strlen(html); i++)
    {
        if (html[i] == '<')
        {
            a++;
            continue;
        }
        else if (html[i] == '>')
        {
            // printf("%d\n", a);
            break;
        }
        else
        {
            a++;
            continue;
        }
    }

    for ( j = a+1; j < strlen(html); j++)
    {
        if (html[j]==' ')
        {
            continue;
        }
        else
        {
            // printf("%d\n",j);
            break;
        }
    }

    for ( l = strlen(html); l > a+1; l--)
    {
        if (html[l]=='<')
        {
            // printf("%d\n",l);
            break;
        }
        
    }

    for (k = j; k < l; k++)
    {
        printf("%c",html[k]);
          
    }
    

    return 0;
}
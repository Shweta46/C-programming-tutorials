 #include<stdio.h>
#include<stdlib.h>

typedef struct listitem{
    struct listitem *next;
    struct listitem *prev;
    int data;
} LISTITEM;

int main()
{
    LISTITEM *temp, *head;
    head = NULL;

    for(int i = 0; i < 3; i++)
    {
        temp = malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = head;
        if (head != NULL)
        {
            head->prev = temp;
        }
        head = temp;
    }

    temp = head;

    while (temp != NULL)
    {
        printf("Current element: %d\n",temp->data);
        temp = temp->next;
    }
    return 0;    

}

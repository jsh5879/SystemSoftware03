#include "main.h"
#include <stdio.h>
#include <string.h>


extern phone book[MAX];
extern int size;

void Delete()
{
    char find[15];
    printf("\nName to delete: ");
    scanf("%s", find);
    int check = 0;
    for (int i = 0; i < size; i++ )
    {
        if (check == 0)
        {
            if (!strcmp(find,(book+i)->name))
            {
                strcpy((book+i)->name, "");
                strcpy((book+i)->phone_num, "");
                check = 1;
                printf("\n%s information deleted!\n\n", find);
            }
        }
        else
        {
            strcpy((book+i-1)->name, (book+i)->name);
            strcpy((book+i-1)->phone_num, (book+i)->phone_num);
        }
    }

    if ( check == 0)
        printf("\nNo result.\n\n");
    else
    {
        size--;
    }
}

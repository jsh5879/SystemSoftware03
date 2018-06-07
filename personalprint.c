#include <stdio.h>
#include <string.h>
#include "main.h"

extern int size;
extern phone book[MAX];

void personalprint()
{
    if ( size == 0 ){
        printf("\nThe list is empty.\n\n");
        return;
    }
    int i = 0;
    char find[15];
    printf("\nName to search for: ");
    scanf("%s", find);

    while (i < size){
        if (!strcmp(find, (book+i)->name)){
            printf("\n%s %s\n\n", (book+i)->name, (book+i)->phone_num);
            return;
        }
        i++;
    }

    printf("\nNo result.\n\n");
}

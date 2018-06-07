#include <stdio.h>
#include <string.h>
#include "main.h"

extern int size;
extern phone book[MAX];

void allprint()
{
    if ( size == 0 ){
        printf("\nThe list is empty.\n\n");
        return;
    }
    int i;
    printf("\n<<Phone number list>>\n");
    for (i = 0; i<size; i++)
        printf("%s %s\n", (book+i)->name, (book+i)->phone_num);
    printf("\n");
}

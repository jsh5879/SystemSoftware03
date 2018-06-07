#include <stdio.h>
#include <string.h>
#include "main.h"

int service = 0;

void new_register();
void allprint();
void personalprint();
void part_delete(char *name);

int main()
{
    do
    {
        printf("Phone Number Management\n\n");
        printf("1. Register   2. All Search   3. Personal Search   4.Delete    5.Exit\n\n");
        printf("Select Menu: ");
        scanf("%d", &service);

        switch (service)
        {
            case 1: new_register(); break;
            case 2: allprint(); break;
            case 3: personalprint(); break;
            case 4: Delete();
        }
    } while (service != 5);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"


char *password = "qwer1234";
extern int service;
int size = 0;
phone book[MAX];

void new_register()
{
    static int fail_number = 1;
    int i, j;
    char *enter;

    enter = (char*)malloc(sizeof(char)*10);

    printf("\nPassword: ");

    while(1)
    {
        scanf("%s", enter);

        for(i=0; i<8; i++){
            if(*(enter+i) != *(password+i)){
                j = 0;
                break;
            }
            j = 1;
        }
        if(j){
            printf("\nName to register: ");
            scanf("%s", (book+size)->name);
            printf("Phone number: ");
            scanf("%s", (book+size)->phone_num);
            printf("%s information registered!\n\n", (book+size)->name);
            size++;
            break;
        }
        else{
            if(fail_number<=2){
                printf("Password(%dth failed): ", fail_number);
                fail_number++;
            continue;
            }
            else{
                printf("Password(3th failed): You can't register!\n\n");
                printf("Exit the program.");
                service = 5;
                break;
            }
        }
    }
}

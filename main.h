#define MAX 50

typedef struct phonebook {
    char name[MAX];
    char phone_num[MAX];
} phone;

void new_register();
void allprint();
void personalprint();
void Delete();

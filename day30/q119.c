#include <stdio.h>

struct Employee {
    int id;
    char name[50];
};

int main() {
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("\nEmployee Details\n");

    printf("ID: %d\n", e.id);
    printf("Name: %s", e.name);

    return 0;
}
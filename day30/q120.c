#include <stdio.h>

void display(int marks[]) {

    int i;

    printf("\nMarks:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", marks[i]);
}

int main() {

    char name[50];
    int marks[5], i;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter 5 Marks:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &marks[i]);

    printf("\nStudent: %s", name);

    display(marks);

    return 0;
}
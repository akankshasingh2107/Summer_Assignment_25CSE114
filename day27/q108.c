#include <stdio.h>

int main() {
    char name[50];
    float m1, m2, m3, total, percentage;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter 3 Marks: ");
    scanf("%f%f%f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\nMarksheet\n");
    printf("Name: %s\n", name);
    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if(percentage >= 40)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}
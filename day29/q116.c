#include <stdio.h>

struct Item {
    char name[50];
    int quantity;
};

int main() {
    struct Item i;

    printf("Enter Item Name: ");
    scanf("%s", i.name);

    printf("Enter Quantity: ");
    scanf("%d", &i.quantity);

    printf("\nInventory Details\n");

    printf("Item: %s\n", i.name);
    printf("Quantity: %d", i.quantity);

    return 0;
}
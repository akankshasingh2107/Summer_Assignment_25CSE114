#include <stdio.h>

int main() {
    int issued;

    printf("Enter issued books: ");
    scanf("%d", &issued);

    if(issued <= 2)
        printf("Books Issued");
    else
        printf("Limit Exceeded");

    return 0;
}
#include <stdio.h>

int main() {
    int books;

    printf("Enter total books issued: ");
    scanf("%d", &books);

    if(books <= 3)
        printf("Issue Allowed");
    else
        printf("Limit Exceeded");

    return 0;
}
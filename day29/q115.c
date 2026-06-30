#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter string: ");
    scanf("%s", str);

    printf("1.Length\n2.Reverse\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Length = %d", strlen(str));
    }

    else if(choice == 2) {

        int len = strlen(str);

        for(int i = len - 1; i >= 0; i--)
            printf("%c", str[i]);
    }

    else
        printf("Invalid");

    return 0;
}
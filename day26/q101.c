#include <stdio.h>

int main() {
    int number = 7, guess;

    printf("Guess a number (1-10): ");

    do {
        scanf("%d", &guess);

        if(guess > number)
            printf("Too High\n");
        else if(guess < number)
            printf("Too Low\n");

    } while(guess != number);

    printf("Correct Guess!");

    return 0;
}
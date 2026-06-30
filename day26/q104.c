#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Q2. 2 + 2 = ?\n");
    printf("1.3  2.4\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("Q3. C language developed by?\n");
    printf("1.Dennis Ritchie  2.James Gosling\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Score = %d/3", score);

    return 0;
}
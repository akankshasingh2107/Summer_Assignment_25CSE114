#include <stdio.h>

int main() {
    int seats;

    printf("Enter number of seats: ");
    scanf("%d", &seats);

    if(seats <= 5)
        printf("Booking Successful");
    else
        printf("Seats Not Available");

    return 0;
}
#include <stdio.h>

int main() {
    int n, sum = 0, total = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = (n + 1) * (n + 2) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}
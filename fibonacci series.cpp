#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle cases where the number of terms is less than 1
    if (n < 1) {
        printf("Number of terms should be at least 1.\n");
        return 1;
    }

    // Print the Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}
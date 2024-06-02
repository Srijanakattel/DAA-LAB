#include <stdio.h>

int main() {
    int number;
    int factorial = 1; // Using unsigned long long to handle large numbers

    // Prompt the user to enter a number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Factorial of negative numbers is not defined
    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu\n", number, factorial);
}
return 0;
}
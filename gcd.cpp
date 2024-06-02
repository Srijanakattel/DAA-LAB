#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure the first number is non-negative
    if (num1 < 0) {
        num1 = -num1;
    }
    
    // Ensure the second number is non-negative
    if (num2 < 0) {
        num2 = -num2;
    }

    // Implement the Euclidean algorithm
    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    }

    // The GCD is the value of num1 (or num2) after the loop
    printf("GCD is %d\n", num1);

    return 0;
}
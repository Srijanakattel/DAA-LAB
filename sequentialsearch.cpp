#include <stdio.h>

int main() {
    int n, searchElement, found = 0;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Prompt the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Prompt the user to enter the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Perform sequential search
    for (int i = 0; i < n; i++) {
        if (array[i] == searchElement) {
            printf("Element %d found at index %d\n", searchElement, i);
            found = 1;
            break;
        }
    }

    // If the element is not found in the array
    if (!found) {
        printf("Element %d not found in the array\n", searchElement);
    }

    return 0;
}
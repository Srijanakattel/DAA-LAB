#include <stdio.h>

int main() {
    int n, searchElement;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Prompt the user to enter the elements of the array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Prompt the user to enter the element to search
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Initialize variables for binary search
    int left = 0;
    int right = n - 1;
    int found = 0;

    // Perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == searchElement) {
            printf("Element %d found at index %d\n", searchElement, mid);
            found = 1;
            break;
        }

        if (array[mid] < searchElement) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // If the element is not found in the array
    if (!found) {
        printf("Element %d not found in the array\n", searchElement);
    }

    return 0;
}

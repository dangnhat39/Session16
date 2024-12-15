#include <stdio.h>

int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i; // Return the position of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int valueToFind = 7;

    int position = findElement(arr, size, valueToFind);

    if (position != -1) {
        printf("Position: %d\n", position);
    } else {
        printf("Element not found\n");
    }

    return 0;
}


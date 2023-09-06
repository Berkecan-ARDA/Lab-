#include <stdio.h>

int countOddRecursive(const int *arr, int size) {
    // Base case
    if (size == 0) {
        return 0;
    }

    // Recursive 
    int count = countOddRecursive(arr, size - 1);
    if (arr[size - 1] % 2 != 0) {
        count++;
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9,10};
   
    int size = sizeof(arr) / sizeof(arr[0]);
    int oddCount = countOddRecursive(arr, size);
    printf("Number of odd numbers in the array: %d\n", oddCount);

    return 0;
}

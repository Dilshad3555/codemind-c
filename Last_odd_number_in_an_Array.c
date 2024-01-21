#include <stdio.h>

int main() {
    int n; // Size of the array
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input array elements

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lastOdd = -1; // Initialize to a value that cannot be an odd number

    // Find the last odd number in the array
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            // Odd number found
            lastOdd = arr[i];
            break; // Stop searching once the last odd number is found
        }
    }

    if (lastOdd != -1) {
        printf("%d
", lastOdd);
    } else {
        printf("No odd numbers found in the array.
");
    }

    return 0;
}
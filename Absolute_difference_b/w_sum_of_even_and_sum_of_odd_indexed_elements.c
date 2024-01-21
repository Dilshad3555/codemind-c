#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Size of the array
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sumOdd = 0, sumEven = 0;

    // Calculate the sum of odd and even indexed elements
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Even indexed element
            sumEven += arr[i];
        } else {
            // Odd indexed element
            sumOdd += arr[i];
        }
    }

    // Calculate the absolute difference
    int absoluteDifference = abs(sumOdd - sumEven);

    // Output the result
    printf("%d
", absoluteDifference);

    return 0;
}
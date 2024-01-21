#include <stdio.h>

int main() {
    int n; // Size of the array
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input array elements
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    // Count the even numbers between odd numbers
    for (int i = 1; i < n - 1; i++) {
        if (arr[i - 1] % 2 == 1 && arr[i] % 2 == 0 && arr[i + 1] % 2 == 1) {
            count++;
        }
    }

    // Display the result
    printf("%d
", count);

    return 0;
}
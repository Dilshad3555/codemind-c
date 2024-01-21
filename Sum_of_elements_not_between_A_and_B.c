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

    int A, B;
    scanf("%d %d", &A, &B);

    int sum = 0;

    // Calculate the sum of elements not in between A and B
    for (int i = 0; i < n; i++) {
        if (arr[i] < A || arr[i] > B) {
            sum += arr[i];
        }
    }

    // Display the result
    printf("%d
",sum);

    return 0;
}
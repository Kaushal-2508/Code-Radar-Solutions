#include <stdio.h>

// Function to reverse an array segment
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    if (k == 0) return; // No rotation needed

    reverse(arr, 0, n - 1);     // Reverse entire array
    reverse(arr, 0, k - 1);     // Reverse first k elements
    reverse(arr, k, n - 1);     // Reverse remaining elements
}

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int k;
    scanf("%d", &k); // Read rotation count

    rotateRight(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print rotated array
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, k;

    // Read number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read key to search
    scanf("%d", &k);

    int found = -1;
    int comparisons = 0;

    // Linear Search
    for (int i = 0; i < n; i++) {
        comparisons++;  // count each comparison

        if (arr[i] == k) {
            found = i;
            break;
        }
    }

    // Output result
    if (found != -1) {
        printf("Element found at position %d\n", found + 1); // 1-based
    } else {
        printf("Element not found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}
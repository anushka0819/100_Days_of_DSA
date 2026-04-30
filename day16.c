#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1000000001)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1000000001;
            }
        }

        printf("%d:%d", arr[i], count);
        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
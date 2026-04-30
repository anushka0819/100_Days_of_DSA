#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *q = (int*)malloc(n * sizeof(int));
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        rear = (rear + 1) % n;
        q[rear] = x;
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        front = (front + 1) % n;
    }

    int count = n;
    int idx = front;

    for (int i = 0; i < count; i++) {
        printf("%d", q[idx]);
        if (i < count - 1) printf(" ");
        idx = (idx + 1) % n;
    }

    free(q);
    return 0;
}
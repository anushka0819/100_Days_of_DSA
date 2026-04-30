#include <stdio.h>

// Recursive function to compute a^b
int power(int a, int b) {
    // base case
    if (b == 0)
        return 1;

    // recursive case
    return a * power(a, b - 1);
}

int main() {
    int a, b;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    printf("%d raised to power %d is %d\n", a, b, power(a, b));

    return 0;
}
#include <stdio.h>

int main() {
    int low, high, a = 0, b = 1, c;

    printf("Enter the range (low high): ");
    scanf("%d %d", &low, &high);

    printf("Fibonacci numbers in the range %d to %d:\n", low, high);
    while (a <= high) {
        if (a >= low) {
            printf("%d ", a);
        }
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
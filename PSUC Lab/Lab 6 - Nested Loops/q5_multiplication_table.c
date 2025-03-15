#include <stdio.h>

int main() {
    int n, k, i, j;

    printf("Enter the number of tables (n): ");
    scanf("%d", &n);
    printf("Enter the number of terms (k): ");
    scanf("%d", &k);

    for (i = 1; i <= n; i++) {
        printf("Multiplication table for %d:\n", i);
        for (j = 1; j <= k; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
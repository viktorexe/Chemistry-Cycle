#include <stdio.h>
int main() {
    int n, sum;
    scanf("%d", &n);
    sum = (n / 1000) + ((n / 100) % 10) + ((n / 10) % 10) + (n % 10);
    printf("[OUTPUT]: %d\n", sum);
    return 0;
}
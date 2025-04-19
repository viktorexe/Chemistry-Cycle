#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *p1 = &a;
    int *p2 = &b;
    int sum;

    sum = *p1 + *p2;
    printf("Sum: %d\n", sum);

    return 0;
}
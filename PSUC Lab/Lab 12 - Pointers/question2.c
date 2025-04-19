#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 15;
    int *p1 = &x;
    int *p2 = &y;
    int *p3 = &z;
    int max, min;

    if (*p1 > *p2) {
        max = *p1;
    } else {
        max = *p2;
    }
    if (*p3 > max) {
        max = *p3;
    }

    if (*p1 < *p2) {
        min = *p1;
    } else {
        min = *p2;
    }
    if (*p3 < min) {
        min = *p3;
    }

    printf("Greatest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 1; i < n; i += 2) {
        sum += arr[i];
    }

    printf("Sum of odd index numbers: %d\n", sum);
    return 0;
}
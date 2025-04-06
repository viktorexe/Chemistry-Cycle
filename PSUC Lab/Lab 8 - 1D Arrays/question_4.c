#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, 0, 5, -6, 0, 8, 9, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        if (arr[i] < 0) neg++;
        if (arr[i] % 2 != 0) odd++;
        if (arr[i] % 2 == 0) even++;
        if (arr[i] == 0) zero++;
    }

    printf("Positive: %d\nNegative: %d\nOdd: %d\nEven: %d\nZeros: %d", pos, neg, odd, even, zero);
    return 0;
}
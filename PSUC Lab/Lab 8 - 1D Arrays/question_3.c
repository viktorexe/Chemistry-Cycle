#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 1, 6};
    int start = 1, end = 3;

    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
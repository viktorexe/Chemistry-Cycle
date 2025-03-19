#include <stdio.h>
int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        if (i % 2 != 0) printf("%d ", i);
    }
    return 0;
}
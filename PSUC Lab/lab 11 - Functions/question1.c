#include <stdio.h>

int Fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * Fact(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = Fact(num);
    printf("Factorial of %d is %d\n", num, result);

    return 0;
}
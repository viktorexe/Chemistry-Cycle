#include <stdio.h>
int main() {
    int n, original, remainder, result = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    original = n;
    while (original != 0) {
        remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
    if (result == n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
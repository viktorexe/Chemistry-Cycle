#include <stdio.h>
int main() {
    int n, reversed = 0, original;
    printf("Enter n: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
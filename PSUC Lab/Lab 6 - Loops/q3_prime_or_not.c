#include <stdio.h>
int main() {
    int n, i, flag = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag) printf("Prime");
    else printf("Not Prime");
    return 0;
}
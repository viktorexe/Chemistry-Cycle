#include <stdio.h>
#include <math.h>
int main() {
    int n;
    float x, sum = 0, term;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        term = pow(-1, i+1) * pow(x, 2*i-1) / tgamma(2*i);
        sum += term;
    }
    printf("%f", sum);
    return 0;
}
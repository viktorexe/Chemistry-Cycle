#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, r1, r2;
    scanf("%f %f %f", &a, &b, &c);
    r1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    r2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    printf("%f %f", r1, r2);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if(a+b>c && b+c>a && a+c>b) {
        float s = (a+b+c)/2;
        printf("[OUTPUT]: %f\n", sqrt(s*(s-a)*(s-b)*(s-c)));
    }
    return 0;
}
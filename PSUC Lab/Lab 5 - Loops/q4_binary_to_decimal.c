#include <stdio.h>
#include <math.h>
int main() {
    int binary, decimal = 0, i = 0, rem;
    printf("Enter binary value: ");
    scanf("%d", &binary);
    while (binary != 0) {
        rem = binary % 10;
        binary /= 10;
        decimal += rem * pow(2, i);
        i++;
    }
    printf("%d", decimal);
    return 0;
}
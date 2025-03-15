#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0, num = 1, originalNum, remainder, sum, digits;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (count < n) {
        originalNum = num;
        sum = 0;
        digits = 0;

        while (originalNum != 0) {
            digits++;
            originalNum /= 10;
        }

        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            sum += pow(remainder, digits);
            originalNum /= 10;
        }

        if (sum == num) {
            count++;
            if (count == n) {
                printf("The %dth Armstrong number is: %d\n", n, num);
            }
        }
        num++;
    }

    return 0;
}
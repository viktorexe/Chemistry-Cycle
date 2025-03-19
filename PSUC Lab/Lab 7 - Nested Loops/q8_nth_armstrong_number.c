#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0, num = 1, org_num, rem, sum, digits;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (count < n) {
        org_num = num;
        sum = 0;
        digits = 0;

        while (org_num != 0) {
            digits++;
            org_num /= 10;
        }

        org_num = num;
        while (org_num != 0) {
            rem = org_num % 10;
            sum += pow(rem, digits);
            org_num /= 10;
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
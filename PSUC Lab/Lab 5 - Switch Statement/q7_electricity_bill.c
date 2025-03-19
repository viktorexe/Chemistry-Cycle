#include <stdio.h>
int main() {
    int units;
    float bill = 0.0;
    scanf("%d", &units);
    if(units >= 1 && units <= 100) bill = 0;
    else if(units >= 101 && units <= 200) bill = (units - 100) * 1.5;
    else if(units >= 201 && units <= 400) bill = (100 * 1.5) + (units - 200) * 2.5;
    else if(units > 400) bill = (100 * 1.5) + (200 * 2.5) + (units - 400) * 3.5;
    printf("[OUTPUT]: %f\n", bill);
    return 0;
}
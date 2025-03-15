#include <stdio.h>
int main() {
    int calls;
    float bill = 0.0;
    scanf("%d", &calls);
    if(calls >= 1 && calls <= 150) bill = 0;
    else if(calls >= 151 && calls <= 250) bill = (calls - 150) * 0.9;
    else if(calls >= 251 && calls <= 400) bill = (100 * 0.9) + (calls - 250) * 1.2;
    else if(calls > 400) bill = (100 * 0.9) + (150 * 1.2) + (calls - 400) * 1.5;
    printf("[OUTPUT]: %f\n", bill);
    return 0;
}
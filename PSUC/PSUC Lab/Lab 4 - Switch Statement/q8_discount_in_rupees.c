#include <stdio.h>
int main() {
    float cost, discount;
    scanf("%f", &cost);
    if(cost >= 800) discount = cost * 0.25;
    else if(cost >= 500 && cost < 800) discount = cost * 0.20;
    else discount = 0;
    printf("[OUTPUT]: %f\n", discount);
    return 0;
}
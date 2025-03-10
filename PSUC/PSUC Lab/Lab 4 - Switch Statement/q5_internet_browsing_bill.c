#include <stdio.h>
int main() {
    int calls;
    float bill = 200.0;
    scanf("%d", &calls);
    if(calls > 100) {
        if(calls <= 150) bill += (calls - 100) * 0.60;
        else bill += 50 * 0.60 + (calls - 150) * 0.50;
    }
    printf("[OUTPUT]: %f\n", bill);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float area, r, l, w, b, h;
    scanf("%d", &choice);
    switch(choice) {
        case 1: scanf("%f", &r); area = 3.14159 * r * r; printf("[OUTPUT]: %f\n", area); break;
        case 2: scanf("%f %f", &l, &w); area = l * w; printf("[OUTPUT]: %f\n", area); break;
        case 3: scanf("%f %f", &b, &h); area = 0.5 * b * h; printf("[OUTPUT]: %f\n", area); break;
    }
    return 0;
}
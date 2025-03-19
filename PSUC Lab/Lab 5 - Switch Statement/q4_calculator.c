#include <stdio.h>
int main() {
    float a, b, result;
    char op;
    scanf("%f %c %f", &a, &op, &b);
    switch(op) {
        case '+': result = a + b; printf("[OUTPUT]: %f\n", result); break;
        case '-': result = a - b; printf("[OUTPUT]: %f\n", result); break;
        case '*': result = a * b; printf("[OUTPUT]: %f\n", result); break;
        case '/': result = a / b; printf("[OUTPUT]: %f\n", result); break;
    }
    return 0;
}   
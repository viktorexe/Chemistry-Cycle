#include <stdio.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("%d", len);
    return 0;
}
#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *p = str;
    int len = 0;

    while (*p != '\0') {
        len++;
        p++;
    }

    printf("Length: %d\n", len);

    return 0;
}
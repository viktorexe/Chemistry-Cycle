#include <stdio.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    int words = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            words++;
        }
    }

    printf("%d", words);
    return 0;
}
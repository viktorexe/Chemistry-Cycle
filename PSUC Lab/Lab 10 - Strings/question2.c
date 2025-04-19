#include <stdio.h>

int main() {
    char str[100], ch;
    fgets(str, 100, stdin);
    scanf("%c", &ch);

    int lastPos = -1;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ch) {
            lastPos = i;
        }
    }

    printf("%d", lastPos);
    return 0;
}
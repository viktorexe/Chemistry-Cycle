#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}
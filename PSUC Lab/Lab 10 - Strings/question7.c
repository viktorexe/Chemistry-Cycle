#include <stdio.h>

int main() {
    char str[100], sub[100];
    fgets(str, 100, stdin);
    fgets(sub, 100, stdin);

    int found = 0;
    for (int i = 0; str[i]; i++) {
        int match = 1;
        for (int j = 0; sub[j] && sub[j] != '\n'; j++) {
            if (str[i + j] != sub[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }

    printf(found ? "Substring found" : "Substring not found");
    return 0;
}
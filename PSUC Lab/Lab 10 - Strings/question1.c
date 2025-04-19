#include <stdio.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    
    for(int i = 0; s[i]; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
    
    printf("%s", s);
    return 0;
}
#include <stdio.h>
int main() {
    char c;
    scanf(" %c", &c);
    if(c >= '0' && c <= '9') printf("[OUTPUT]: digit\n");
    else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
        printf("[OUTPUT]: vowel\n");
    else printf("[OUTPUT]: consonant\n");
    return 0;
}
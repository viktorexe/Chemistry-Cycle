#include <stdio.h>
int main() {
    char s[100];
    gets(s);
    int i;
    for(i=0; s[i]; i++);
    printf("%d", i);
    return 0;
}
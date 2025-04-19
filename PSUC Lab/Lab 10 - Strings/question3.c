#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);

    printf("Length of s1: %lu\n", strlen(s1) - 1); // -1 to exclude '\n'
    strcat(s1, s2);
    printf("Concatenated: %s", s1);
    
    strcpy(s1, s2);
    printf("Copied s2 to s1: %s", s1);
    return 0;
}
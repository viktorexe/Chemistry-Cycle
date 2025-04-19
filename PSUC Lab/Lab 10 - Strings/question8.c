#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    gets(s);
    int l = strlen(s), p=1, i;
    for(i=0; i<l/2; i++)
        if(s[i] != s[l-i-1]) p=0;
    printf(p ? "Palindrome" : "Not palindrome");
    return 0;
}
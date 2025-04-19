#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);
    int len = strlen(str) - 1; // -1 to exclude '\n'

    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    printf(isPalindrome ? "Palindrome" : "Not a palindrome");
    return 0;
}
#include <stdio.h>

char* findSubstring(char *mainStr, char *subStr) {
    char *pMain = mainStr;
    char *pSub = subStr;

    while (*pMain != '\0') {
        char *tempMain = pMain;
        char *tempSub = pSub;

        while (*tempSub != '\0' && *tempMain == *tempSub) {
            tempMain++;
            tempSub++;
        }

        if (*tempSub == '\0') {
            return pMain; // Substring found
        }

        pMain++;
    }

    return NULL; // Substring not found
}

int main() {
    char mainStr[] = "HelloWorld";
    char subStr[] = "World";
    char *result = findSubstring(mainStr, subStr);

    if (result != NULL) {
        printf("Substring found at address: %p\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
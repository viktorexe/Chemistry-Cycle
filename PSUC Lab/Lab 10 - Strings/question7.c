#include <stdio.h>
int main() {
    char s[100], sub[100];
    gets(s);
    gets(sub);
    int i, j, found;
    for(i=0; s[i]; i++) {
        found = 1;
        for(j=0; sub[j]; j++)
            if(s[i+j] != sub[j]) found = 0;
        if(found) break;
    }
    printf(found ? "Found" : "Not found");
    return 0;
}
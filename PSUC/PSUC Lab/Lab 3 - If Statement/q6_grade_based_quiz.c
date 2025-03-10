#include <stdio.h>
int main() {
    int score;
    scanf("%d", &score);
    if(score >= 9) printf("[OUTPUT]: A\n");
    else if(score >= 7) printf("[OUTPUT]: B\n");
    else if(score >= 5) printf("[OUTPUT]: C\n");
    else if(score >= 3) printf("[OUTPUT]: D\n");
    else printf("[OUTPUT]: F\n");
    return 0;
}
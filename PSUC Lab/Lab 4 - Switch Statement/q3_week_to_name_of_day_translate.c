#include <stdio.h>
int main() {
    int day;
    scanf("%d", &day);
    switch(day) {
        case 1: printf("[OUTPUT]: Sunday\n"); break;
        case 2: printf("[OUTPUT]: Monday\n"); break;
        case 3: printf("[OUTPUT]: Tuesday\n"); break;
        case 4: printf("[OUTPUT]: Wednesday\n"); break;
        case 5: printf("[OUTPUT]: Thursday\n"); break;
        case 6: printf("[OUTPUT]: Friday\n"); break;
        case 7: printf("[OUTPUT]: Saturday\n"); break;
    }
    return 0;
}
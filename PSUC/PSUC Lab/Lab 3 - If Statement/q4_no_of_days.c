#include <stdio.h>
int main() {
    int m, days = 0;
    scanf("%d", &m);
    for(int i = 1; i <= m; i++) {
        if(i == 2) days += 28;
        else if(i == 4 || i == 6 || i == 9 || i == 11) days += 30;
        else days += 31;
    }
    printf("%d", days);
    return 0;
}
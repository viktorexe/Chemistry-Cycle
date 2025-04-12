#include <stdio.h>
int main() {
    int marks[3][5], i, j, total[3] = {0}, avg[5] = {0};
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
            avg[j] += marks[i][j];
        }
    }
    for(i = 0; i < 3; i++) printf("%d ", total[i]);
    printf("\n");
    for(j = 0; j < 5; j++) printf("%d ", avg[j]/3);
    return 0;
}
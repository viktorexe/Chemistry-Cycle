#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k, mat1[10][10], mat2[10][10], res[10][10] = {0};
    scanf("%d %d", &r1, &c1);
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);
    scanf("%d %d", &r2, &c2);
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            for(k = 0; k < c1; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}
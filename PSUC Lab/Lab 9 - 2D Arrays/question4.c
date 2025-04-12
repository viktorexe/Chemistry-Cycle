#include <stdio.h>
int main() {
    int n, i, j, mat[10][10], sum = 0, flag = 1;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < n; i++) sum += mat[0][i];
    for(i = 0; i < n; i++) {
        int row = 0, col = 0;
        for(j = 0; j < n; j++) {
            row += mat[i][j];
            col += mat[j][i];
        }
        if(row != sum || col != sum) flag = 0;
    }
    int diag1 = 0, diag2 = 0;
    for(i = 0; i < n; i++) {
        diag1 += mat[i][i];
        diag2 += mat[i][n-1-i];
    }
    if(diag1 != sum || diag2 != sum) flag = 0;
    printf("%d", flag);
    return 0;
}
#include <stdio.h>
int main() {
    int n, i, j, mat[10][10], flag = 1;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(mat[i][j] != mat[j][i]) flag = 0;
    printf("%d", flag);
    return 0;
}
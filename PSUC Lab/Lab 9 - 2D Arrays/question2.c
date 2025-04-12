#include <stdio.h>
int main() {
    int r, c, i, j, mat[10][10], key, count = 0;
    scanf("%d %d", &r, &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    scanf("%d", &key);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(mat[i][j] == key) count++;
    printf("%d", count);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
    int n, i, j, mat[10][10], trace = 0;
    float norm = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if(i == j) trace += mat[i][j];
            norm += mat[i][j] * mat[i][j];
        }
    norm = sqrt(norm);
    printf("%d %.2f", trace, norm);
    return 0;
}
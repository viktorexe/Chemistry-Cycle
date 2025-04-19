#include <stdio.h>
struct emp {
    int eno;
    char name[100];
    float basic, hra, net;
};
int main() {
    struct emp e[100];
    int n;
    float sum = 0, avg;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %s %f %f", &e[i].eno, e[i].name, &e[i].basic, &e[i].hra);
        e[i].net = e[i].basic + e[i].hra;
        sum += e[i].net;
    }
    avg = sum / n;
    for(int i=0;i<n;i++)
        if(e[i].net > avg)
            printf("%d %s %.2f %.2f %.2f\n", e[i].eno, e[i].name, e[i].basic, e[i].hra, e[i].net);
    return 0;
}
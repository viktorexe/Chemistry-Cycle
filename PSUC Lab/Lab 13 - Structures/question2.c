
#include <stdio.h>
#include <string.h>
struct student {
    int roll;
    char name[100];
    int m1, m2, m3, total;
};
void sort(struct student s[], int n) {
    struct student t;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(s[i].total < s[j].total) {
                t = s[i]; s[i] = s[j]; s[j] = t;
            }
}
int main() {
    struct student s[100];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %s %d %d %d", &s[i].roll, s[i].name, &s[i].m1, &s[i].m2, &s[i].m3);
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    }
    sort(s,n);
    for(int i=0;i<n;i++)
        printf("%d %s %d\n", s[i].roll, s[i].name, s[i].total);
    return 0;
    }
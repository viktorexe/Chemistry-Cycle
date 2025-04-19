#include <stdio.h>
struct personal {
    char name[100];
    char doj[20];
    float salary;
};
int main() {
    struct personal p;
    gets(p.name);
    gets(p.doj);
    scanf("%f", &p.salary);
    printf("%s\n%s\n%.2f", p.name, p.doj, p.salary);
    return 0;
}
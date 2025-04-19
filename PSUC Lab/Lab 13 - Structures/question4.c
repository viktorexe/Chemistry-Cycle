#include <stdio.h>
struct Date {
    int d, m, y;
};
int daysInMonth(int m, int y) {
    if(m==2) return (y%4==0 && (y%100!=0 || y%400==0)) ? 29 : 28;
    if(m==4||m==6||m==9||m==11) return 30;
    return 31;
}
int main() {
    struct Date date;
    scanf("%d %d %d", &date.d, &date.m, &date.y);
    date.d += 45;
    while(date.d > daysInMonth(date.m, date.y)) {
        date.d -= daysInMonth(date.m, date.y);
        date.m++;
        if(date.m > 12) {
            date.m = 1;
            date.y++;
        }
    }
    printf("%02d-%02d-%d", date.d, date.m, date.y);
    return 0;
}
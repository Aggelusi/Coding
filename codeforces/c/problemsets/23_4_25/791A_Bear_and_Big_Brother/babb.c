#include <stdio.h>

int main() {
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    if (a < 1 || b < 1 || a > b || a > 10 || b > 10) return 1;
    while (a <= b) {
        a *= 3;
        b *= 2;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
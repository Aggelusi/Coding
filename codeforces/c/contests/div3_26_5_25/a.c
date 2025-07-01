#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // include math library

int main() {
    int t;
    char s[5];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%4s", s);
        int num = atoi(s);

        double root = sqrt((double)num);
        int int_root = (int)(root + 0.5);

        if (int_root * int_root == num) {
            // Now find a and b such that (a + b)^2 = num
            // For example, you can try all splits of int_root:
            int found = 0;
            for (int a = 0; a <= int_root; a++) {
                int b = int_root - a;
                if ((a + b) * (a + b) == num) {
                    printf("%d %d\n", a, b);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("-1\n");
            }
        } else {
            printf("-1\n");
        }
    }

    return 0;
}

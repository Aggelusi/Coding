#include <stdio.h>

int main() {
    int n, sure_num = 0, x, fo_shor;
    scanf("%d", &n);
    if (n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) {
        fo_shor = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &x);
            if (x == 1) fo_shor++;
        }
        if (fo_shor >= 2) sure_num++;
    }
    fprintf(stdout, "%d\n", sure_num);
    return 0;
}
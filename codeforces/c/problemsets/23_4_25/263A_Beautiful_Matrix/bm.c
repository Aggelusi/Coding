#include <stdio.h>
#include <stdlib.h>

int main() {
    int p[5][5], x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &p[i][j]);
            if (p[i][j] == 1) {
                x = i, y = j;
            }
        }
    }
    int moves = abs(x - 2) + abs(y - 2);

    printf("%d\n", moves);
    return 0;
}
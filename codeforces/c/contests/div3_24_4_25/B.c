#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        if (x == n) {
            // Any permutation works — just print 0 to n-1
            for (int i = 0; i < n; i++) {
                printf("%d ", i);
            }
            printf("\n");
            continue;
        }

        // Step 1: 0 to x-1
        for (int i = 0; i < x; i++) {
            printf("%d ", i);
        }

        // Step 2: x+1 to n-1
        for (int i = x + 1; i < n; i++) {
            printf("%d ", i);
        }

        // Step 3: x at the end
        printf("%d\n", x);
    }

    return 0;
}

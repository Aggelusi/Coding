#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, s;
        scanf("%d %d", &n, &s);
        int x[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &x[i]);
        }
        int min_x = x[0];
        int max_x = x[n-1];
        int steps;
        if (s <= min_x) {
            steps = max_x - s;
        } else if (s >= max_x) {
            steps = s - min_x;
        } else {
            steps = max_x - min_x;
        }
        printf("%d\n", steps);
    }
    return 0;
}
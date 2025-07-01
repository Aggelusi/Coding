#include <stdio.h>

#define MAXN 200005

int a[MAXN], b[MAXN];

int main() {
    int t, n, k;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &k);

        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n; i++) scanf("%d", &b[i]);

        int x = -1, valid = 1;
        for (int i = 0; i < n; i++) {
            if (b[i] != -1) {
                int curr = a[i] + b[i];
                if (x == -1) x = curr;
                else if (x != curr) {
                    valid = 0;
                    break;
                }
            }
        }

        if (!valid) {
            printf("0\n");
            continue;
        }

        if (x == -1) {
            int low = a[0], high = a[0] + k;
            for (int i = 1; i < n; i++) {
                if (a[i] > low) low = a[i];
                if (a[i] + k < high) high = a[i] + k;
            }
            int result = (high >= low) ? (high - low + 1) : 0;
            printf("%d\n", result);
        } else {
            long long ways = 1;
            for (int i = 0; i < n; i++) {
                if (b[i] == -1) {
                    int bi = x - a[i];
                    if (bi < 0 || bi > k) {
                        ways = 0;
                        break;
                    }
                } else {
                    if (a[i] + b[i] != x) {
                        ways = 0;
                        break;
                    }
                }
            }
            printf("%lld\n", ways);
        }
    }

    return 0;
}

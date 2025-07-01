#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int t, n, a[50], ops, start, finish;
    scanf("%d", &t);
    if (t < 1 || t > 1000) return 1;
    for (int i = 0; i < t; i++) {
        ops = 0;
        scanf("%d", &n);
        if (n < 1 || n > 50) return 1;
        for (int j = 0; j < n; j++) {
            scanf("%d",&a[j]);
            if (a[j] < 1 || a[j] > 50) return 1;
        }
        qsort(a, n, sizeof(a[0]), comp);
        start = 0, finish = n-1;
        while ((a[start]+a[finish])%2!=0) {
            if ((a[start+1]+a[finish])%2==0) {
                ops++;
                break;
            } else if ((a[start]+a[finish-1])%2==0) {
                ops++;
                break;
            } else if ((a[start+1]+a[finish-1])%2==0) {
                ops+=2;
                break;
            } else {
                finish--;
                start++;
                ops++;
            }
        }
        printf("%d\n", ops);
    }
    return 0;
}
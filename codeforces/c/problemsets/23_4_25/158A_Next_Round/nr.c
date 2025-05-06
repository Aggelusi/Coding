#include <stdio.h>

int main() {
    int n , k, pass_count = 0;
    scanf("%d %d", &n, &k);
    if (k<1 || k>n || k>50 || n>50 || n<1) return 1;
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k-1] && a[i] > 0)  pass_count++;
    }
    printf("%d\n", pass_count);
    return 0;
}
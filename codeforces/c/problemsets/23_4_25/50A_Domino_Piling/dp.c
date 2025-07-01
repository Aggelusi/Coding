#include <stdio.h>

int main() {
    int m, n, numero;
    scanf("%d %d", &m, &n);
    if (n>16 || n<1 || m>16 || m<1) return 1;
    int per_row = m/2, per_floor = n/2;
    if (m%2==0) numero = (m/2)*n;
    else if (n%2==0) numero = (n/2)*m;
    else numero = (m/2)*n+n/2;
    printf("%d\n", numero);
    return 0;
}
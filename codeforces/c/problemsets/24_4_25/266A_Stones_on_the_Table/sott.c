#include <stdio.h>

int main() {
    int n, moves = 0;
    scanf("%d", &n);

    char s[52];
    scanf("%s", s);

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            moves++;
        }
    }

    printf("%d\n", moves);
    return 0;
}

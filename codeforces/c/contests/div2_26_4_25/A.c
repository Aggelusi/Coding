#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    if (t < 1 || t > 10000) return 1;

    for (int test = 0; test < t; test++) {
        long long num;
        scanf("%lld", &num);

        if (num < 0 || num > 9999999999LL) return 1;

        int digits[10]; // store digits

        // extract digits
        for (int i = 9; i >= 0; i--) {
            digits[i] = num % 10;
            num /= 10;
        }

        // mark which digits we have
        int count[10] = {0};
        for (int i = 0; i < 10; i++) {
            count[digits[i]]++;
        }

        // now reconstruct the beautiful number
        for (int pos = 0; pos < 10; pos++) {
            int need = 9 - pos; // minimum needed at this position

            for (int d = need; d <= 9; d++) {
                if (count[d] > 0) {
                    printf("%d", d);
                    count[d]--;
                    break;
                }
            }
        }

        printf("\n"); // after each test case
    }

    return 0;
}

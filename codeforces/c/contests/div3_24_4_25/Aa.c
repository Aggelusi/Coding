#include <stdio.h>
#include <string.h>

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        char s[11]; // n <= 10, +1 for null terminator
        scanf("%s", s);

        int totalOnes = 0;
        for (int i = 0; i < n; i++) {
            // Count 1s in original string
            if (s[i] == '1') totalOnes++;
        }

        // For each flipped string, we add:
        // - 1 if original was '0'
        // - subtract 1 if original was '1'
        // That means: total_ones + (n - 2 * ones_at_i)

        // Total 1s on board = (n-1) * (number of 1s in s) + (n - number of 1s in s)
        // = number of 1s in s * (n - 1) + (n - number of 1s in s)
        // = ones * (n - 2) + n

        int result = totalOnes * (n - 2) + n;
        printf("%d\n", result);
    }

    return 0;
}

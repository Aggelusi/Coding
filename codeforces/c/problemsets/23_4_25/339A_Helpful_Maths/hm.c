#include <stdio.h>
#include <string.h>

int main() {
    char s[105];
    int a[100], n = 0;

    scanf("%s", s);  // Read the input string

    for (int i = 0; s[i]; i++) {
        if (s[i] >= '1' && s[i] <= '3') {
            a[n++] = s[i] - '0'; // store number
        }
    }

    // Simple sort (bubble sort is fine here, n <= 50)
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output
    for (int i = 0; i < n; i++) {
        if (i > 0) printf("+");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

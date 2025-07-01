#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char s[200005];  // buffer for string input

    scanf("%d", &t);
    getchar();  // consume newline

    while (t--) {
        fgets(s, sizeof(s), stdin);
        int len = strlen(s);

        // Remove newline if present
        if (s[len - 1] == '\n') {
            s[--len] = '\0';
        }

        int prefix = 0;
        while (s[prefix] == '(') prefix++;

        int suffix = 0;
        while (s[len - 1 - suffix] == ')') suffix++;

        if (prefix + suffix >= len) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}

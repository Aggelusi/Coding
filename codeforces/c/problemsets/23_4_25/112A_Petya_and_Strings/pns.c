#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1005

int main() {
    int result = 0;
    char uno[MAX_LEN], dos[MAX_LEN];

    if (fgets(uno, sizeof(uno), stdin) == NULL) return 1;
    if (fgets(dos, sizeof(dos), stdin) == NULL) return 1;

    int length1 = 0, length2 = 0;
    while (uno[length1] != '\0' && uno[length1] != '\n') length1++;
    while (dos[length2] != '\0' && dos[length2] != '\n') length2++;

    if (length1 != length2) return 1;

    for (int i = 0; i < length1; i++) {
        if (uno[i] >= 'A' && uno[i] <= 'Z') uno[i] += 32;
        if (dos[i] >= 'A' && dos[i] <= 'Z') dos[i] += 32;
        if (uno[i] == dos[i]) continue;
        if (uno[i] > dos[i]) { result = 1; break; }
        else { result = -1; break; }
    }

    printf("%d\n", result);
    return 0;
}

#include <stdio.h>

int main() {
    char c;
    int count = 0;
    do {
        c = getchar();
        if (count == 0 && c >= 'a') c -= 32;
        printf("%c", c);
        count++;
    } while (c != '\n' && c != '\0');

    return 0;
}
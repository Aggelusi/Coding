#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char c;
    scanf("%d", &n);

    int len[n];
    char *board[n];

    for (int i = 0; i < n; i++) {
        len[i] = 0;
        board[i] = malloc(1);
        c = getchar();
        while (c == '\n') c = getchar(); // Skip any leading newlines

        do {
            char *temp = realloc(board[i], len[i] + 2); // +1 for char, +1 for '\0'
            board[i] = temp;
            board[i][len[i]] = c;
            len[i]++;
            c = getchar();
        } while (c != '\n');

        board[i][len[i]] = '\0'; // Properly null-terminate
    }

    for (int i = 0; i < n; i++) {
        if (len[i] <= 10) {
            printf("%s\n", board[i]);
        } else {
            printf("%c%d%c\n", board[i][0], len[i] - 2, board[i][len[i] - 1]);
        }
        free(board[i]); // Also free each allocated word!
    }

    return 0;
}

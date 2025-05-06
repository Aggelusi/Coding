#include <stdio.h>
#include <string.h>

int main() {
    char username[101];
    int distinct[26] = {0}; // To track presence of each letter
    int count = 0;

    scanf("%100s", username);

    for (int i = 0; username[i]; ++i) {
        int idx = username[i] - 'a';
        if (!distinct[idx]) {
            distinct[idx] = 1;
            count++;
        }
    }

    if (count % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}

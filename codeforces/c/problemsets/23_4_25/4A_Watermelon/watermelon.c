#include <stdio.h>

int main() {
    int w;
    do {
        fscanf(stdin, "%d", &w);
    } while (w<1 || w>100);
    if (w%2==0 && w!=2) fprintf(stdout, "YES\n");
    else fprintf(stdout, "NO\n");
    return 0;
}
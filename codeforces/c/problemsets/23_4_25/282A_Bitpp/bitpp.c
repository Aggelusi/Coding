#include <stdio.h>

int main() {
    int n, x=0, p_count, m_count, x_count;
    char c;
    scanf("%d", &n);
    if (n < 1 || n > 150) return 1;
    for (int i = 0; i<n; i++) {
        p_count = 0, m_count = 0, x_count = 0;
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &c);
            if (c != '+' && c != '-' && c != 'X') return 1;
            switch (c) {
                case '+': p_count++; break;
                case '-': m_count++; break;
                case 'X': x_count++; break;
            }
            if (j==1 && c=='X') return 1;
        }
        if (p_count>0 && m_count>0) return 1;
        if (p_count == 2 && x_count == 1) x++;
        else if(m_count == 2 && x_count == 1) x--;
    }
    printf("%d\n", x);
    return 0;
}
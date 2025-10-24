#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, a[10];
    double max_val;
    cin >> t;
    if (t < 1 || t > 10000) return 1;

    while (t--) {
        cin >> n;
        if (n < 1 || n > 10) return 1;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 1 || a[i] > 10) return 1;
        }

        max_val = 0.0;
        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                double sum = 0.0;
                for (int i = l; i <= r; i++) sum += a[i];
                double avg = sum / (r - l + 1);
                if (avg > max_val) max_val = avg;
            }
        }

        cout << max_val << '\n';
    }

    return 0;
}

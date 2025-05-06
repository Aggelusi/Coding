#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, n;
    cin >> n >> l;
    if (n < 1 || n > 1000 || l < 1 || l > pow(10,9)) {
        return 1;
    }

    vector<int> positions(n);
    for (int i = 0; i < n; i++) {
        cin >> positions[i];
    }
    sort(positions.begin(), positions.end());

    double max_gap = 0.0;
    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, (double)(positions[i] - positions[i - 1]));
    }

    double start_gap = (double)positions[0];
    double end_gap = (double)(l - positions[n - 1]);
    double d = max({max_gap / 2.0, start_gap, end_gap});

    cout << fixed << setprecision(9) << d << endl;

    return 0;
}
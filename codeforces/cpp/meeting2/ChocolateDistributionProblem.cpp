#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (m > n) {
        cout << "m>n broco";
        return 1;
    }
    int i, arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int out = (arr[m- 1] - arr[0]);
    cout << out << "\n";
    return 0;
}
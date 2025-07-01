#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j; 
    int sumx = 0, sumy = 0, sumz = 0;
    cin >> n;
    int arr[n][3];
    if (n < 1 || n > 100) return 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            cin >> arr[i][j];
            if (arr[i][j] < -100 || arr[i][j] > 100) return 1;
        }
        sumx += arr[i][0];
        sumy += arr[i][1];
        sumz += arr[i][2];
    }
    if (sumx == 0 && sumy == 0 && sumz == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
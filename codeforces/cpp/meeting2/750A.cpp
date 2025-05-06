#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if ((n < 1 || n > 10) || (k < 1 || k > 240)) return 1;

    int time = 60*4 - k, i = 0, time_sum = 0;
    while (((i+1)*5 + time_sum <= time) && i < n) {
        time_sum += (i+1)*5;
        i++;
    }                                                                                                                                                       
    cout << i << "\n";

    return 0;
}               
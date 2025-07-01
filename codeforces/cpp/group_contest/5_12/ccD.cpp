#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sushi(n);
    for (int i = 0; i < n; ++i) {
        cin >> sushi[i];
    }

    // Keep track of consecutive groups of 1s and 2s
    vector<int> groups;
    int current_count = 1;

    for (int i = 1; i < n; ++i) {
        if (sushi[i] == sushi[i - 1]) {
            current_count++;
        } else {
            groups.push_back(current_count);
            current_count = 1;
        }
    }
    groups.push_back(current_count);

    // Find the maximum valid length
    int max_length = 0;
    for (int i = 1; i < groups.size(); ++i) {
        max_length = max(max_length, 2 * min(groups[i - 1], groups[i]));
    }

    cout << max_length << endl;

    return 0;
}
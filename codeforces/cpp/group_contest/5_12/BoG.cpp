#include <bits/stdc++.h>
using namespace std;

int main() {
    char arr[101];
    cin.getline(arr, 101);
    int char_num = strlen(arr);

    bool chars[26] = {false};
    int distinct = 0;
    for (int i = 0; i < char_num; i++) {
        if (!chars[arr[i] - 'a']) { // Check if the character has been seen before
            chars[arr[i] - 'a'] = true; // Mark the character as seen
            distinct++;
        }
    }

    if (distinct % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
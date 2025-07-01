#include <iostream>
using namespace std;

int main() {
    int i = 5;
    float sum = 0.0, a[5], mo;
    cout << "Give me the grades of the 5 students: ";
    while (i--) {
        cin >> a[i];
        sum += a[i];
    }
    mo = sum/5.0;
    cout << "The average of the 5 students is: " << mo << endl << "Grades smaller than the average are the following: ";
    i = 5;
    while (i--)
        if (a[i] < mo) cout << a[i] << " ";
    cout << endl;
    return 0;
}
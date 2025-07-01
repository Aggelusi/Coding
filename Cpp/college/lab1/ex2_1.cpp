#include <iostream>
#include <cmath>
using namespace std;

double rate(float a, float b) {
    return (b-a)/b;
}

int main() {
    double minCharge = 1.602 * (pow(10, -19));
    double rate_value = rate(20, 25);
    cout << rate_value << endl;
    return 0;
}
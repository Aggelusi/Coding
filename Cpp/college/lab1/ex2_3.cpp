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

    float minCharge = 3.0;
    float rate = 1.5/100.0;
    float initial_sum = 200.0;
    cout << "€" << initial_sum << " €" << minCharge << " €" << rate << " €" << initial_sum*(rate+1) << endl;

    return 0;
}
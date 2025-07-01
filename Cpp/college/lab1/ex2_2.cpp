#include <iostream>
using namespace std;

int main() {
    float minCharge = 3.0;
    float rate = 1.5/100.0;
    float initial_sum = 200.0;
    cout << "€" << initial_sum << " €" << minCharge << " €" << rate << " €" << initial_sum*(rate+1);
    return 0;
}
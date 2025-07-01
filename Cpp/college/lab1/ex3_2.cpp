#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float s = 10, r = 2.5, h1 = 8, a1 = 100, b1 = 75, h2 = 15, a2 = 3, b2 = 4;

    float cube = s*s*s;
    float cylinder = 3.14 * r*r * h1;
    float cube_like = a1 * b1 * h2;
    float dist = b2 - a2;
    double eucledian_dist = sqrt( pow((a2),2) + pow((b2),2));
    cout << cube << endl;
    cout << cylinder << endl;
    cout << cube_like << endl;
    cout << dist << endl;
    cout << eucledian_dist << endl;
    return 0;
}
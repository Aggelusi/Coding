#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;                                                            
}

int main() {
    int num;
    cin >> num;
    for (int i = 0; i <= num; i++) {
        
    }
    return 0;
}
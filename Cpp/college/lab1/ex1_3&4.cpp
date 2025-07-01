#include <iostream>
using namespace std;

int odd_even(int num) {
    if (num % 2 == 0) 
        return 0;
    else 
        return 1;
}

int isPrime(int num) {
    if (num <= 1) return 1;
    for (int i = 2; i <= num; ++i) {
        if (num % i == 0)
            return 1;
    }
    return 0;
}

int main() {
    
    return 0;
}
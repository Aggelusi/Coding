int maxProduct(int n) {
    int digits[10], max = 0, i = 0;
    while (n > 0) {
        digits[i++] = n % 10;
        n /= 10;
    }
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < i; k++) {
            if (j != k && digits[j] * digits[k] > max) {
                max = digits[j] * digits[k];
            }
        }
    }
    return max;
}
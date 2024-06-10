double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    
    double result = 1.0;
    long long abs_n = n;
    
    if (n < 0) {
        abs_n = -abs_n;
        x = 1 / x;
    }
    
    while (abs_n > 0) {
        if (abs_n % 2 != 0) {
            result *= x;
        }
        x *= x;
        abs_n /= 2;
    }
    
    return result;
}

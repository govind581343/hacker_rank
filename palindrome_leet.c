bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    
    long long reversed = 0;
    long long original = x;

    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        reversed = (reversed * 10) + pop;
    }
    return (original == reversed);
}

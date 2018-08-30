#include <iostream>
#include <cassert>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit_fast(long long n) {
    // write your code here
    n=n+1;
    long long arr[n];
    arr[0] = 0; arr[1] = 1;
    long long i;
    for (i=2; i<n; i++) {
        arr[i] = (arr[i-1]+arr[i-2])%10;
    }
    return arr[n-1];
}

int main() {
    long long n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
}

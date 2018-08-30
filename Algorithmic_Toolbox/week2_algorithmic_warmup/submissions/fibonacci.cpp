#include <iostream>
#include <cassert>

int fibonacci_fast(int n) {
    // write your code here
    n=n+1;
    int arr[n];
    arr[0] = 0; arr[1] = 1;
    int i;
    for (i=2; i<n; i++) {
        arr[i] = arr[i-1]+arr[i-2];
    }
    return arr[n-1];
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}

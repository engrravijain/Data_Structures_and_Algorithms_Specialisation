#include <iostream>

long long gcd_fast(long long a, long long b) {
  if (b==0) return a;
  else {
    long long a_prime = a%b;
    return gcd_fast(b, a_prime);
  }
}

long long lcm_fast (long long a, long long b) {
  return (((long long)a*b)/(gcd_fast(a, b)));
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}

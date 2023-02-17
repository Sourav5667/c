#include <iostream>

int solve(int a, int b) {
  return a*a + 2*a*b + b*b;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << solve(a, b) << std::endl;
  return 0;
}

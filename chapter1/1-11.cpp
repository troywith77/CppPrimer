#include <iostream>

int main () {
  int sum = 0, a, b;
  std::cout << "Enter two number:" << std::endl;
  std::cin >> a >> b;
  while (a <= b) {
    sum += a;
    a++;
  }
  std::cout << "Sum of " << a << " to " << b << " is " << sum << std::endl;
  return 0;
}
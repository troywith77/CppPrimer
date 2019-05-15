#include <iostream>

int main () {
  int sum = 0, i = 10;
  while (i >= 0) {
    sum += i;
    i--;
  }
  std::cout << "Sum of 1 to 10 is " << sum << std::endl;\
  return 0;
}
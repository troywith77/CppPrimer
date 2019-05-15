#include <iostream>

// int main () {
//   int sum = 0, a, b;
//   std::cout << "Enter two number:" << std::endl;
//   std::cin >> a >> b;
//   for (; a <= b; a++) {
//     sum += a;
//   }
//   std::cout << "Sum of " << a << " to " << b << " is " << sum << std::endl;
//   return 0;
// }
int main() {
  int sum = 0, a, b;
  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> a >> b;
  for (int i = a; i <= b; i++) {
    sum += i;
  }
  std::cout << "Sum of " << a << " to " << b << " is " << sum << std::endl;
}
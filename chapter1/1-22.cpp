#include <iostream>
#include "../includes/Sales_item.h"

int main() {
  Sales_item sum, value;

  while (std::cin >> value) {
    sum += value;
  }

  std::cout << "sum of these items is " << sum << std::endl;

  return 0;
}
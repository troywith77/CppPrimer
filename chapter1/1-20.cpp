#include <iostream>
#include "../includes/Sales_item.h"

int main() {
  Sales_item item;
  while (std::cin >> item) {
    std::cout << "sales item: " << item << std::endl;
  }
}
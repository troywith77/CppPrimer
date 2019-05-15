#include <iostream>
#include "../includes/Sales_item.h"

int main() {
  Sales_item total;

  if (std::cin >> total) {
    Sales_item value;

    while (std::cin >> value) {
      if (total.isbn() == value.isbn()) {
        total += value;
      } else {
        std::cout << total << std::endl;
        total = value;
      }  
    }

    std::cout << total << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  
  return 0;
}
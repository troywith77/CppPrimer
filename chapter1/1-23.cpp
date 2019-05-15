#include <iostream>
#include "../includes/Sales_item.h"

int main() {
  Sales_item currItem, item;

  if (std::cin >> currItem) {
    int count = 1;

    while (std::cin >> item) {
      if (currItem.isbn() == item.isbn()) {
        count++;
        // currItem += item;
      } else {
        std::cout << "item " << currItem.isbn() << " occurs " << count << " times" << std::endl;
        count = 1;
        currItem = item;
      }
    }

    std::cout << "item " << currItem.isbn() << " occurs " << count << " times" << std::endl;
  }
}
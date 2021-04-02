#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item currItem, item;
    // int currVal = 0, val = 0;
    if (std::cin >> currItem) {
        int cnt = 1;
        while (std::cin >> item) {
            if (item.isbn() == currItem.isbn()) {
                ++cnt;
            }
            else {
                std::cout << "book " << currItem.isbn() << " has " 
                          << cnt << " records" << std::endl;
                currItem = item;
                cnt = 1;
            }
        }
        std::cout << "book " << currItem.isbn() << " has " 
                  << cnt << " records" << std::endl;
    }
    return 0;
}

#include <iostream>

/*
 * 递减顺序打印 10 到 0 之间到整数
 */

int main()
{
    int n = 10;
    while(n >= 0){
        std::cout << n-- << std::endl;
    }
    return 0;
}

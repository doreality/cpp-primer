#include <iostream>

/*
 * 简单 main():
 * 用户输入两个整数
 * 打印出这两个整数范围内的所有整数
 */
int main()
{
    int a = 0, b = 0;
    std::cout << "Enter two numbers: "<< std::endl;
    std::cin >> a >> b;
    if (a > b) {
        int temp = b;
        b = a;
        a = temp;
    }
    while (a <= b) {
        std::cout << a++ << " ";
    }
    std::cout << std::endl;
    return 0;
}

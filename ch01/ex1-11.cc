#include <iostream>

/*
 * 简单 main():
 * 用户输入两个整数
 * 打印出这两个整数范围内的所有整数
 */
int main()
{
    int a = 0, b = 0;
    std::cout << "Enter two numbers: (first number is smaller)" << std::endl;
    std::cin >> a >> b;
    while (a <= b) {
        std::cout << a++ << " ";
    }
    std::cout << std::endl;
    return 0;
}

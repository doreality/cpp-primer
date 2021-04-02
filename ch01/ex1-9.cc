#include <iostream>

/*
 * 把 50 到 100 的整数相加
 * 并输出结果
 */

int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
	    val++;
    }
    std::cout << "The sum of 50 to 100 is " << sum << std::endl;
    return 0;
}

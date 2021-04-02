#include <iostream>

int main()
{

//    1.9 using for
//
//    int sum = 0;
//    for (int val = 50; val <= 100; val++) {
//        sum += val;
//    }
//    std::cout << "The sum of 50 to 100 is " << sum << std::endl;

//    1.10
//
//    for(int n = 10; n >= 0; n--) {
//        std::cout << n << " ";
//    }
//    std::cout << std::endl;

//    1.11
//
    int a = 0, b = 0;
    std::cin >> a >> b;
    for(int i = a; i <= b; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main()
{
    // 1
    //std::cout << "/*";
    // 输出：/*%

    // 2
    //std::cout << "*/";
    // 输出：*/%

    // 3
    // std::cout << /* "*/" */;
    // 输出：
    // ex1-8.cc:14:24: warning: missing terminating '"' character [-Winvalid-pp-token]
    // std::cout << /* "*/" */;
    //                    ^
    // ex1-8.cc:14:24: error: expected expression
    // 1 warning and 1 error generated.
    // 错误原因：第一个 "/*" 和引号里的 "*/ 匹配了，
    // 修改：
    // std::cout << /* */ "*/" /* */;


    // 4
    //std::cout << /* "*/" /* "/*" */;
    // 输出： /* %

    return 0;
}


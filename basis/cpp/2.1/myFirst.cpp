#include <iostream>

// 代码风格：
// 语句占一行
// 函数开始结束有花括号，花括号各占一行
// 语句相对于花括号缩进
int main()
{
    using namespace std;
    // \n 换行符
    cout << "hello c++\n";
    cout << endl;
    // 没有使用namespace的情况下：
    std::cout << "enjoy!" << endl;
    std::cin.get();
    return 0;
}
// 结果为：
// hello c++

// enjoy!

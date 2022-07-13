#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios::floatfield);

    // 计算截断
    cout << 9 / 5 << endl; // 1
    // 浮点常量默认情况为double类型
    cout << 9.0 / 5.0 << endl; // 1.800000
    // 不同类型的计算，会自动转换类型，这里5被转换为double类型
    cout << 9.0 / 5 << endl; // 1.800000
    cout << 1.e7 / 9.0 << endl; // 1111111.111111
    cout << 1.e7f / 9.0f << endl; // 1111111.125000

    cin.get();
}
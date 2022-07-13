#include <iostream>

using namespace std;

int main()
{
    float a = 2.34e22f;
    float b = a + 1.0f;

    cout << a << endl;
    // float 运算只能保留7位有效数值，1实际上加到了第22位。因此结果为0
    cout << b - a << endl;// 0
    cin.get();
}

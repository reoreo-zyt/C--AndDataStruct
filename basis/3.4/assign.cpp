#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess{3.9832}; // c++ 11的{}赋值更为严格，不允许缩窄，即不允许float类型转换为整型
    int debt = 7.2e12;

    cout << tree << endl;
    cout << guess << endl;
    cout << debt << endl;

    cin.get();
    return 0;
}
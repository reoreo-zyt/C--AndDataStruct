#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?"
         << endl;
    cin >> carrots;
    cout << "now you hava "
         << carrots
         << " carrots";
    // 第一条在输入数字时按Enter读取输入
    // 第二条让程序暂停，直到按下Enter键
    cin.get();
    cin.get();
    return 0;
}

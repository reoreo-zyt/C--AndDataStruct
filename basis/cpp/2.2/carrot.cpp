#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    cout << "eat 1";
    carrots -= 1;
    cout << " , now I have ";
    cout << carrots;
    cout << " carrots.";
    // 等待用户输入，这样程序不会退出
    cin.get();
    return 0;
}

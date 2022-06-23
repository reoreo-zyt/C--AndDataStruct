#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: " << endl;
    // 输入M时，cin 将输入的值转化为 77
    cin >> ch;
    cout << "Hola!";
    // 输出时，cout 将77转化为M
    cout << "Thank you for the " << ch << " character." << endl;
    cin.get();
    cin.get();
    return 0;
}
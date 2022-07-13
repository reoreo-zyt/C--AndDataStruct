#include <iostream>

using namespace std;

int main()
{
    // \a 振铃
    // \" 双引号
    // \' 单引号
    cout << "\a Operation \"HyperHype\" is now activted!\n";
    // \b 退格
    cout << "Enter your agent code:________\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    cin.get();
    cin.get();
    return 0;
}
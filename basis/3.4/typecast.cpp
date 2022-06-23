#include <iostream>

using namespace std;

int main()
{
    int auks, bats, coots;

    auks = 19.99 + 11.99;

    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);

    cout << bats << endl; // 30
    cout << coots << endl; // 30

    char ch = 'Z';
    cout << ch << endl; // Z
    cout << int(ch) << endl; // 90
    cout << static_cast<int>(ch) << endl; // 90

    cin.get();
    return 0;
}
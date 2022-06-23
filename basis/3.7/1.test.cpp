#include <iostream>

using namespace std;

int main()
{
    const int convert = 12;
    float height;
    cout << "Enter your height: __________\b\b\b\b\b";
    cin >> height;
    cout << height * convert;

    cin.get();
    cin.get();
    return 0;
}

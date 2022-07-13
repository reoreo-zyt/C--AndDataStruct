#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    // 默认情况下，cout 以十进制格式显示整数
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "chest = " << inseam << " (octal for 42)" << endl;

    cin.get();
}

// chest = 42 (decimal for 42)
// waist = 2a (hexadecimal for 42)
// chest = 52 (octal for 42)

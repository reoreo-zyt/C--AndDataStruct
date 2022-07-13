#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    // 默认情况下，cout 以十进制格式显示整数
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << "chest = " << inseam << " (042 in octal)" << endl;

    cin.get();
}

// chest = 42 (42 in decimal)
// waist = 66 (0x42 in hex)
// chest = 34 (042 in octal)

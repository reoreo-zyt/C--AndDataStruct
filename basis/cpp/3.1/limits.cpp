#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // 对于类型名，sizeof 将名称放在括号中，对于变量名，括号是可选的
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimun int value" << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl; 

    cin.get();
}

// sizeof 指出，在使用8位字节的系统中，int 的长度位4字节。
// int is 4 bytes.
// short is 2 bytes.
// long is 4 bytes.
// long long is 8 bytes.
// Maximum values:
// int: 2147483647
// short: 32767
// long: 2147483647
// long long: 9223372036854775807
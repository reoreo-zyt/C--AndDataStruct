#include <iostream>

using namespace std;

int main()
{
    // 字符字面值使用单引号表示
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "And one to the character code:" << endl;
    ch += 1;
    i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    // cout.put() 用于输出字符
    cout.put(ch);
    cout.put('!');
    cin.get();
    return 0;
}
// The ASCII code for M is 77
// And one to the character code:
// The ASCII code for N is 78
// N!


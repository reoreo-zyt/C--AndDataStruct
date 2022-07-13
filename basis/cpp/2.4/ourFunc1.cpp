#include <iostream>

// 将命名空间放在函数外面和前面，使用两个函数都能访问到该命名空间
using namespace std;

void simon(int);

int main()
{
    simon(3);
    cout << "Enter a integer"
         << endl;
    int count;
    cin >> count;
    simon(count);
    cin.get();
    cin.get();
    return 0;
}

void simon(int n)
{
    cout << "your enter is "
         << n
         << "\n";
}

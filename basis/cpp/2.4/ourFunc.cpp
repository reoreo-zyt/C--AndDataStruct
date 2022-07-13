#include <iostream>
// 函数原型
void simon(int);

int main()
{
    using namespace std;
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
    using namespace std;
    cout << "your enter is "
         << n
         << "\n";
}

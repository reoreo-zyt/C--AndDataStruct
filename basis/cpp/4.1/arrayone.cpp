#include <iostream>

using namespace std;

int main()
{
    // 声明数组
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    // 声明并初始化数组
    int yamcosts[3] = {20, 30, 5};

    cout << sizeof yams << "bytes" << endl;
    cout << sizeof yams[0] << "bytes" << endl;
    cin.get();
}
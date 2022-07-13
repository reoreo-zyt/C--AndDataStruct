#include <iostream>

using namespace std;

int main()
{
    // 迫使输出使用定点表示法，更好地了解精度，防止程序把较大的值切换为 E 表示法，并使程序显示到小数点后 6 位。
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    // 通常cout会删除结尾的0
    cout << "tub is " << tub << endl;
    cout << "a million tub is " << tub * million << endl;
    cout << "ten million tub is " << 10 * tub * million << endl;

    cout << "mint is " << mint << endl;
    cout << "a million mint is " << mint * million << endl;

    cin.get();
    return 0;
}

// tub is 3.333333
// a million tub is 3333333.250000
// ten million tub is 33333332.000000
// mint is 3.333333
// a million mint is 3333333.333333

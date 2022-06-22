#include <iostream>
// 1 英石为 14 磅，写转换程序
double stonetolb(double);

int main()
{
    using namespace std;
    double stone;
    cout << "Enter stone";
    cin >> stone;
    double pound;
    pound = stonetolb(stone);
    cout << "pound is "
         << pound;
    cin.get();
    cin.get();
    return 0;
}

double stonetolb(double stone)
{
    return stone * (double)14;
}

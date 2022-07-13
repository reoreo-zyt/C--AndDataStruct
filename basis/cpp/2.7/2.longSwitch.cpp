#include <iostream>

using namespace std;

long switchTo(long d);

int main()
{
    long distance;
    cout << "enter a distance" << endl;
    cin >> distance;
    cout << switchTo(distance);
    cin.get();
    cin.get();
}

long switchTo(long d)
{
    return 220 * d;
}
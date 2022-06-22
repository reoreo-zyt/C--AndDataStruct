#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Enter the floor area"
         << endl;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "side is "
         << side
         << endl;
    cin.get();
    cin.get();
    return 0;
}

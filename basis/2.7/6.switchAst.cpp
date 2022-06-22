#include <iostream>

using namespace std;

double getValue(double c);

int main()
{
    double value;
    cout << "Enter the number of light years: ";
    cin >> value;
    cout << value << "light years =  " << getValue(value) << " astronomical units";

    cin.get();
    cin.get();
}

double getValue(double c)
{
    return 63240 * c;
}
#include <iostream>

using namespace std;

double getValue(double c);

int main()
{
    double value;
    cout << "Please enter a Celsius value: ";
    cin >> value;
    cout << value << "degree Celsius is " << getValue(value) << " degree Fahrenheit";

    cin.get();
    cin.get();
}

double getValue(double c)
{
    return 1.8 * c + 32.0;
}
#include <iostream>

using namespace std;

int main()
{
    int degrees, minutes, seconds;

    cout << "Enter degrees" << endl;
    cin >> degrees;
    cout << "Enter minutes" << endl;
    cin >> minutes;
    cout << "Enter seconds" << endl;
    cin >> seconds;

    cout << degrees << "degrees," << minutes << "minutes," << seconds << "seconds" << " = " << (float(minutes) / 60) + (float(seconds) / 3600) + float(degrees) << "degrees";
    cin.get();
    cin.get();
}
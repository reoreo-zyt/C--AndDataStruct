#include <iostream>

using namespace std;

int countMouth(int y);

int main()
{
    cout << "Enter your age: " << endl;
    int age;
    cin >> age;
    cout << "mouths are " << countMouth(age);

    cin.get();
    cin.get();
}

int countMouth(int y)
{
    return y * 12;
}

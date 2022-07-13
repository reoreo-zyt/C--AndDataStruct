#include <iostream>
#include <cmath>

using namespace std;

float compute(float f, float i, float w);

int main()
{
    float feet, inch, weight;
    cout << "Enter your feet_____\b\b\b";
    cin >> feet;
    cout << "Enter your inch_____\b\b\b";
    cin >> inch;

    cout << "Enter your weight(pound)_____\b\b\b";
    cin >> weight;

    cout << compute(feet, inch, weight);
}

float compute(float f, float i, float w)
{
    return ((1 / 2.2) * w)/ sqrt((f * 12 + i) * 0.0254);
}

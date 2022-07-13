#include <iostream>

using namespace std;

void cout1(string s);

void cout2(string s);

int main()
{
    cout1("Three blind mice");
    cout2("See how they run");
    cin.get();
}

void cout1(string s)
{
    cout << s << endl;
    cout << s << endl;
}

void cout2(string s)
{
    cout << s << endl;
    cout << s << endl;
}
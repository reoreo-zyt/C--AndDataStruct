#include <iostream>
#define ZERO 0
#include <climits>

using namespace std;

int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dolllors." << endl;
    cout << "Sue has " << sue << " dolllors." << endl;

    cout << "And 1 $ to each account." << endl;

    sam += 1;
    sue += 1;

    cout << "Sam has " << sam << " dolllors." << endl;
    cout << "Sue has " << sue << " dolllors." << endl;

    cout << "Poor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Turn their count 0." << endl;
    cout << "Sam has " << sam << " dolllors." << endl;
    cout << "Sue has " << sue << " dolllors." << endl;

    sam -= 1;
    sue -= 1;

    cout << "Degree 1 $ to each account." << endl;
    cout << "Sam has " << sam << " dolllors." << endl;
    cout << "Sue has " << sue << " dolllors." << endl;

    cout << "Lucky Sue!" << endl;
    cin.get();
}

// Sam has 32767 dolllors.
// Sue has 32767 dolllors.
// And 1 $ to each account.
// Sam has -32768 dolllors.
// Sue has 32768 dolllors.
// Poor Sam!
// Turn their count 0.
// Sam has 0 dolllors.
// Sue has 0 dolllors.
// Degree 1 $ to each account.
// Sam has -1 dolllors.
// Sue has 65535 dolllors.
// Lucky Sue!

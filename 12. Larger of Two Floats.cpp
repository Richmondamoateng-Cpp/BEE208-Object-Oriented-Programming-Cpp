#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter two floating point numbers: ";
    cin >> x >> y;

    float larger = (x > y) ? x : y;
    cout << "Larger number: " << larger << endl;

    return 0;
}

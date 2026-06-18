#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    double area = M_PI * pow(radius, 2);
    cout << "Area of circle: " << area << endl;

    return 0;
}

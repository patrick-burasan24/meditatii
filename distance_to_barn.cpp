#include <iostream>

using namespace std;

int main() {
    double x_grajd, y_grajd;
    double x_pajiste, y_pajiste;
    double d;

    cin >> x_grajd >> y_grajd;
    cin >> x_pajiste >> y_pajiste;
    cin >> d;

    // (x_pajiste - x_grajd)^2 + (y_pajiste - y_grajd)^2 <= d * d
    double x = (x_pajiste - x_grajd) * (x_pajiste - x_grajd);
    double y = (y_pajiste - y_grajd) * (y_pajiste - y_grajd);

    if (x + y <= d * d)
        cout << "GOOD";
    else
        cout << "BAD";
    cout << '\n';
    return 0;
} 

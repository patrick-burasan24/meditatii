#include <bits/stdc++.h>

using namespace std;

int main() {
    double x_A, y_A, x_B, y_B, x_C, y_C, x_G, y_G;
    cin >> x_A >> y_A >> x_B >> y_B >> x_C >> y_C;
    x_G = (x_A + x_B + x_C) / 3;
    y_G = (y_A + y_B + y_C) / 3;
    cout << fixed << setprecision(2);
    cout << x_G << ' ' << y_G << '\n';
    return 0;
}

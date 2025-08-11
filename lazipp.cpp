#include <iostream>

using namespace std;

int main()
{
    int a, b, c, h;
    cin >> a >> b >> c >> h;
    h *= 100;
    int hmin = a;
    if (b < hmin)
        hmin = b;
    if (c < hmin)
        hmin = c;
    cout << h / hmin << '\n';
    return 0;
}

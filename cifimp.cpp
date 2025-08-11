#include <iostream>

using namespace std;

int main()
{
    int n, u, z, s, contorImpare = 0;
    cin >> n;
    u = n % 10;
    z = n / 10 % 10;
    s = n / 100;
    if (u % 2 == 1) /// Conditie numar impar
        contorImpare++;
    if (z % 2 == 1) /// Conditie numar impar
        contorImpare++;
    if (s % 2 == 1) /// Conditie numar impar
        contorImpare++;
    cout << contorImpare << '\n';
    return 0;
}

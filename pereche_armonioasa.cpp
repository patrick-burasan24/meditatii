#include <iostream>

using namespace std;

int main() {
    int x, y, suma;
    cin >> x >> y;
    suma = x + y;
    if (suma % 2 == 0)
        cout << "PERECHE ARMONIOASA";
    else
        cout << "FAIL";
    cout << '\n';
    return 0;
}
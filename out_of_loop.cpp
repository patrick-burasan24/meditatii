#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if ( ! ( y <= x && x <= z ) )
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
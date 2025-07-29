#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int minim = a;
    if (b < minim)
        minim = b;
    if (c < minim)
        minim = c;
    cout << minim << '\n';
    return 0;
}

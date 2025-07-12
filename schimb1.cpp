#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int aux = a;
    a = b;
    b = aux;
    cout << a << ' ' << b << '\n';
    return 0;
}
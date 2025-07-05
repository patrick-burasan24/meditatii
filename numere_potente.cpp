#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 10 && n <= 99 && n / 10 > n % 10)
        cout << "ESTE POTENT";
    else
        cout << "NU ESTE POTENT";
    cout << '\n';
    return 0;
}
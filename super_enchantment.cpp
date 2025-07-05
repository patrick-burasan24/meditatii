#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        int ogl = 0, p = 1, copie = x;
        do {
            ogl = ogl * 10 + copie % 10;
            p *= 10;
            copie /= 10;
        } while (copie);
        cout << 1LL * x * p + ogl << '\n';
    }
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    
    if (r1 + 1 == r2 && (c1 - 1 == c2 || c1 + 1 == c2))
        cout << "CHECK";
    else if (r1 + 1 == r2 && c1 == c2)
        cout << "DRAW";
    else
        cout << "LOSE";
    cout << '\n';
    return 0;
}

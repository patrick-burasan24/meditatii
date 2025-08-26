#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mini, maxi;
    mini = a;
    if (b < mini)
        mini = b;
    if (c < mini)
        mini = c;
    maxi = a;
    if (b > maxi)
        maxi = b;
    if (c > maxi)
        maxi = c;
    cout << maxi - mini << '\n';
    return 0;
}

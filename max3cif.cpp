#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int maxi = -1;
    while (n >= 100)
    {
        int candidat = n % 1000;
        if (candidat >= 100 && candidat > maxi)
            maxi = candidat;
        n /= 10;
    }
    cout << maxi << '\n';
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int div_sum(int n) {
    if (n <= 0) return -1;
    if (n == 1) return +1;
    int sum = 1 + n;
    int d = 2;

    while (d * d < n) {
        if (!(n % d))
            sum += d + n / d;
        ++d;
    }

    if (d * d == n) 
        sum += d;

    return sum;
}

int n;

int main() {
    cin >> n;
    
    int suffix = 0;
    int p = 1;
    int ans = 0;
    while (n) {
        suffix += n % 10 * p;
        cout << suffix << '\n';
        if (div_sum(suffix) == 2 * suffix)
            ++ans;
        p *= 10;
        n /= 10;
    }

    if (!ans)
        cout << "NU EXISTA\n";
    else
        cout << ans << '\n';

    return 0;
}
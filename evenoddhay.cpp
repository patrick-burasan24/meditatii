#include <bits/stdc++.h>

using namespace std;

int n;
int baloti[2001];

inline bool ok(int a, int b) {
    if (a % 2 == 1 && b % 2 == 0)
        return true;
    if (a % 2 == 0 && b % 2 == 0 && a < b)
        return true;
    if (a % 2 == 1 && b % 2 == 1 && a > b)
        return true;
    return false;
}

inline void swap(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

void ordonare(int *baloti, int n) {
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (ok(baloti[i], baloti[j]))
                swap(baloti[i], baloti[j]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    n *= 2;
    for (int i = 1; i <= n; i++)
        cin >> baloti[i];
    ordonare(baloti, n);
    for (int i = 1; i <= n; i++)
        cout << baloti[i] << ' ';
    cout << '\n';
    return 0;
}
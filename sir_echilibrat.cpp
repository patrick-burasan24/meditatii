#include <iostream>

using namespace std;

int v[100001];  // Declaram vectorul in spatiul global din doua motive:
                // 1. Se autoinitializeaza fiecare element cu 0;
                // 2. Foloseste memoria globala, ci nu cea din stiva functiei main()

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    bool este_sir_echilibrat = true;            // Folosim un 'flag' pentru a determina raspunsul
    int k = (int)ceil(1.0 * n / 2); 
    int constanta = v[1] + v[n];                // Luam drept constanta prima pereche (sugerata de problema)
    for (int i = 2; i <= k; i++)                // Daca n este impar, elementul din mijloc este adunat de 2 ori
        if (v[i] + v[n - i + 1] != constanta)   // Verificam elementele simetrice (pereche)
            este_sir_echilibrat = false;

    if (!este_sir_echilibrat)
        cout << "NU";
    else
        cout << "DA";
    cout << '\n';
    return 0;
}
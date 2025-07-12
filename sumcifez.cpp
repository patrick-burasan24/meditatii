#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int suma_cifrelor = n % 10 + n / 10;    // n % 10 -> cifra unităților
                                            // n / 10 -> cifra zecilor
                                            // La numere naturale / întregi a / b calculează partea întreagă
                                            // a raportului. Vezi partea întreagă la matematică
                                            // Ex: 7 / 2 = 3, 6 / 5 = 1, 8 / 10 = 0
    cout << suma_cifrelor << '\n';
    return 0;
}
#include <iostream>
#include <iomanip>  // Bibliotecă de (manip)ulare a operațiilor de intrare/ieșire (i/o)
                    // O folosim pentru funcția setprecision() și câmpul fixed
                    // setprecision() -> setăm câte cifre apar după virgulă (floating point)
                    // fixed -> asigură afișarea în format clasic, ci nu științific

#define PI 3.14159  // Directivă de preprocesare care definește constanta universală PI să fie 3.14159
                    // Este diferită de o declarare de variabilă, fiindcă valoarea ei rămâne la fel
                    // indiferent de ce facem în restul programului -> rămâne CONSTANTĂ

using namespace std;

int main() {
    double r; // double, nu float pentru ACURATEȚE mai bună (adică este o aproximare mai exactă)
    cin >> r;
    double A = PI * r * r; // Alternativ: float A = PI * pow(r, 2);
    double P = 2 * PI * r;
    cout << fixed << setprecision(2) <<  A << ' ' << P << '\n'; // Dăm răspunsul cu 2 zecimare după virgulă
    return 0;
}
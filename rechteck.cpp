// Programm, das den Benutzer nach einer Länge und Breite fragt und berechnet die fläsche und die Umkreis 

#include <iostream>

using namespace std;

double umkreis(double x, double y) {
    return (x + y) * 2;
}

double flaesche(double x, double y) {
    return x * y;
}

int main() {
    double laenge;
    double breite;

    // hifsvariable
    double F;
    double U;

    cout << "Geben Sie eine Laenge ein: ";
    cin >> laenge;
    cout << endl << "Geben Sie eine Breite ein: ";
    cin >> breite;

    F = flaesche(laenge, breite);
    U = umkreis(laenge, breite);

    cout << "Die Flaesche ist:  " << F << " und der Umkreis ist: " << U <<  endl;

    return 0;
}
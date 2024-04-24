// ecrire un programme qui demande a l'utilisateur de taper 5 entiers et qui affiche leur moyenne.
// Le Programme ne devra utiliser que 2 variables

#include <iostream>
using namespace std;

int main() {

    int zahl;
    int i = 0;
    int sum;
    float moyenne;

    cout << "Bitte geben Sie 5 Zahl ein: " << endl;
    for(i = 0; i < 5; i++) {
        cout << "Nombre " << i + 1 << ": ";
        cin >> zahl;
        sum = sum + zahl;
    } 
    
    moyenne = (sum) / 5;
    cout << "die  durchnittliche ist : " << moyenne<< endl;

    return 0;
}
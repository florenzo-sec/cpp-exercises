#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// prendi giorno e mese, calcola quanti giorni sono passati dal primo di gennaio alla data fornite
using namespace std;
int main() {
    int giorno, mese;
    cout << "Inserisci il giorno: ";
    cin >> giorno;
    cout << "Inserisci il mese: ";
    cin >> mese;

    int giorniPassati = 0;

    switch(mese) {
        case 12: giorniPassati += 30; // novembre
        case 11: giorniPassati += 31; // ottobre
        case 10: giorniPassati += 30; // settembre
        case 9:  giorniPassati += 31; // agosto
        case 8:  giorniPassati += 31; // luglio
        case 7:  giorniPassati += 30; // giugno
        case 6:  giorniPassati += 31; // maggio
        case 5:  giorniPassati += 30; // aprile
        case 4:  giorniPassati += 31; // marzo
        case 3:  giorniPassati += 28; // febbraio 
        case 2:  giorniPassati += 31; // gennaio
        case 1:  break;
        default:
            cout << "Mese non valido!" << endl;
            system("pause");
	}
    if (giorno < 1 || giorno > 31) {
        cout << "Giorno non valido!" << endl;
        system("pause");
    }

    giorniPassati += giorno;

    cout << "Giorni passati dal 1 gennaio: " << giorniPassati - 1 << endl;

    system("pause");
}


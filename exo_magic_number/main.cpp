#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
    using namespace std;

    int number = rand() % 50;
    int x;

    for (int i; i < 6; i++) {
        cout << "Choisie un nombre entre 0 et 49 : " << endl;
        cin >> x;

        if (x < number) {
            cout << "Le nombre est trop petit !\n" << endl;
            cout << "il te reste " << 5-i << " coup !\n" << endl;
        } else if (x > number) {
            cout << "Le nombre est trop grand !\n" << endl;
            cout << "il te reste " << 5-i << " coup !\n" << endl;
        } else if (x == number) {
            cout << "Bravo tu as trouvé !\n" << endl;
            break;
        }
    }

    cout << "Le nombre été : " << number;

    return 0;
}
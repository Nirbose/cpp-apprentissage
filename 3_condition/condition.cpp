#include <iostream>

int main()
{
    using namespace std;

    int var;

    cout << "Choisie 0 ou 1 : ";
    cin >> var;

    if (var) {
        cout << "Cela fonctionne !" << endl;
    } else {
        cout << "Tu n'as pas accès !" << endl;
    }

    return 0;
}

#include <iostream>
#include <typeinfo>

int main()
{
    using namespace std;

    char a = 'A';
    int b = 1;
    float c = 1.95;
    bool d = true;
    const int e = 5;

    cout << "Le type de variable est : " << typeid(a).name();

    return 0;
}

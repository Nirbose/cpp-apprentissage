#include <iostream>

int main()
{
    using namespace std;

    for (int i = 0; i < 10; i++)
    {
        cout << i << " | ";
    }

    cout << "\n---------------------------------------" << endl;

    int a = 0;
    while (a < 10) {
        cout << a << " | ";
        a++;
    }
    
    return 0;
}

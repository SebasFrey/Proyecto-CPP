#include <iostream>

using namespace std;

int main()
{
    int n, suma = 0;

    cout << "Digite el numero de elementos: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    cout << "\nLa suma es: " << suma << endl;

    cin.get();
    return 0;
}

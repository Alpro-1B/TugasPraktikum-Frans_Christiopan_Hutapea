#include <iostream>

using namespace std;

void tampilkanPiramida(int tinggi)
{
    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = 1; j <= tinggi - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }

        cout << endl;
    }
}

int main()
{
    cout << " Program C++ Piramida Bintang " << endl;
    cout << endl;

    int tinggi;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    cout << endl;

    tampilkanPiramida(tinggi);

    return 0;
}

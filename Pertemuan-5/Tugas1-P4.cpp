#include <iostream>
using namespace std;

int batas, jumlahGanjil, jumlahGenap, jumlahPrima;

void rumusGanjil()
{
    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i += 2)
    {
        cout << i << " ";
        jumlahGanjil += i;
    }
}

void rumusGenap()
{
    cout << "\n Bilangan Genap: ";
    for (int i = 2; i <= batas; i += 2)
    {
        cout << i << " ";
        jumlahGenap += i;
    }
}

void rumusPrima()
{
    cout << "\n Bilangan Prima: ";
    for (int i = 2; i <= batas; i++)
    {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++)
            ;

        if (j * j > i)
        {
            cout << i << " ";
            jumlahPrima += i;
        }
    }
}


void rumusFaktorGanjil()
{
    cout << "\nFaktor-faktor dari bilangan ganjil adalah: ";
    for (int i = 1; i <= jumlahGanjil; i++)
    {
        if (jumlahGanjil % i == 0)
        {
            cout << i << " ";
        }
    }
}

void rumusFaktorGenap()
{
    cout << "\nFaktor-faktor dari bilangan genap adalah: ";
    for (int i = 1; i <= jumlahGenap; i++)
    {
        if (jumlahGenap % i == 0)
        {
            cout << i << " ";
        }
    }
}

void rumusFaktorPrima()
{
    cout << "\nFaktor-faktor dari bilangan prima adalah: ";
    for (int i = 1; i <= jumlahPrima; i++)
    {
        if (jumlahPrima % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    cout << "Program Bilangan Ganjil, Genap, dan Prima" << endl;

    do
    {
        cout << "Masukkan batas akhir: ";
        cin >> batas;

        if (batas <= 0)
        {
            cout << "Anda tidak memasukkan bilangan positif. Coba lagi\n";
        }
    } while (batas <= 0);

    rumusGanjil();
    rumusFaktorGanjil();

    rumusGenap();
    rumusFaktorGenap();

    rumusPrima();
    rumusFaktorPrima();

    cout << endl;

    return 0;
}

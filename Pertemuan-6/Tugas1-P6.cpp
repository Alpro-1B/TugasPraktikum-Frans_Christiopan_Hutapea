#include <iostream>

using namespace std;

int main()
{
    int input[100], JumlahElementArray, i, maxNum, maxIndex;

    cout << "##  Program C++ Cari Nilai Terbesar  ##" << endl;
    cout << "=======================================" << endl;
    cout << endl;


    do
    {
        cout << "Input jumlah elemen Array: ";
        cin >> JumlahElementArray;

        if (JumlahElementArray <= 0)
        {
            cout << "Anda tidak memasukkan bilangan positif. Coba lagi\n";
        }
    } while (JumlahElementArray <= 0);

    cout << "Input " << JumlahElementArray << " angka (dipisah dengan enter): " << endl;

    //dalam loop yang digunakan untuk mengisi array, setiap elemen array dicetak bersama dengan indeksnya.
    for (i = 0; i < JumlahElementArray; i++)
    {
        cin >> input[i];
    }

    cout << endl;

    maxNum = input[0];
    maxIndex = 0;

        //mencari nilai terbesar dan indeksnya dengan loop terpisah:
    for (i = 0; i < JumlahElementArray; i++)
    {
        cout << "Index " << i << ": " << input[i] << endl;

        if (input[i] > maxNum)
        {
            maxNum = input[i];
            maxIndex = i;
        }
    }

    cout << "Angka terbesar adalah: " << maxNum << " dengan indeks: " << maxIndex;

    cout << endl;
    return 0;
}

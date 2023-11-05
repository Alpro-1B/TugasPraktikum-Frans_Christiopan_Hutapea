#include <iostream>

using namespace std;

int main()
{
    int batas;
    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    cout << "Program Bilangan Ganjil, Genap, dan Prima " << endl;

    cout << "Masukkan batas akhir: ";
    cin >> batas;	// Input buat batasan akhir sesuai keinginan penggunanya

    cout << "Bilangan Ganjil: ";
    // Output untuk bilangan ganjil, cout ini di atas karena kalo ditaro dibawah ntr kecetak banyak garis garisnya
    // Proses mencari bilangan ganjil

    for (int i = 0; i <= batas; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " "; // Menampilkan bilangan ganjil
            jumlahGanjil += i;   // Operasi penjumlahan bilangan ganjil


        }
    }

    cout << endl;

    // Hal yang sama untuk bilangan genap

    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2)
    {
        cout << i << " ";
        jumlahGenap += i;
    }
    cout << endl;

    // Hal yang sama untuk bilangan prima

    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++)
    {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++)
        {
        }

        if (j * j > i)
        {
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << endl;

    // Output jumlah dari masing-masing bilangan

    cout << "Jumlah bilangan ganjil: " << jumlahGanjil << endl;
    cout << "Jumlah bilangan genap: " << jumlahGenap << endl;
    cout << "Jumlah bilangan Prima: " << jumlahPrima << endl;



    // Langkah terakhir nantinya ditentuin faktor-faktor dari jumlah masing-masing bilangan

    // Buat di bilangan ganjil

    cout << "Faktor-faktor dari penjumlahan bilangan ganjil adalah: ";
    for (int i = 1; i <= jumlahGanjil; i++) {
    if (jumlahGanjil % i == 0) {
        cout << i << " ";
    }
}
    cout << endl;

// Buat di bilangan genap

    cout << "Faktor-faktor dari penjumlahan bilangan genap adalah: ";
    for (int i = 1; i <= jumlahGenap; i++) {
    if (jumlahGenap % i == 0) {
        cout << i << " ";
    }
}
    cout << endl;

// Buat di bilangan prima

    cout << "Faktor-faktor dari penjumlahan bilangan prima adalah: ";
    for (int i = 1; i <= jumlahPrima; i++) {
    if (jumlahPrima % i == 0) {
        cout << i << " ";
    }
	}
}


#include <iostream>

using namespace std;

int main()
{
    int input[100], userInputArray[100], JumlahElementArray, i, maxNum, maxIndex;

    // "int input[100]" adalah Array untuk menyimpan angka-angka yang dimasukkan oleh pengguna
    // "Int userinputArra[100]" merupakan Array tambahan untuk menyimpan nilai-nailai yang dimasukkan oleh pengguna sebagai bukti
    // "int JumlahElementArray" adalah Variabel untuk menyimpan jumlah elemen array
    // "int i" merupakan variabel untuk menyimpan jumlah indeks
    // "int maxNumb" adalah variabel untuk menyimpan nilai terbesar dari suatu Array
    // "int maxIndeks" merupakan variabel untuk menyimpan indeks nilai terbesar


    // Menampilkan judul program
    cout << "##  Program C++ Cari Nilai Terbesar  ##" << endl;
    cout << "=======================================" << endl;
    cout << endl;

    // Input jumlah elemen Array dari pengguna dengan batasan nilai maksimum (MAX_ELEMENTS)
    do
    {
        cout << "Input jumlah elemen Array: ";
        cin >> JumlahElementArray;

        if (JumlahElementArray <= 0)
        {
            cout << "Anda tidak memasukkan bilangan positif. Coba lagi\n";
        }
    } while (JumlahElementArray <= 0);

    // Input angka dari pengguna dan menyimpannya dalam array input
    cout << "Input " << JumlahElementArray << " angka (dipisah dengan enter): " << endl;
    for (i = 0; i < JumlahElementArray; i++)
    {
        cin >> input[i];

        // Menyimpan nilai inputan user dalam variabel baru (userInputArray)
        userInputArray[i] = input[i];
    }

    cout << endl;

    // Inisialisasi nilai terbesar dan indeks nilai terbesar
    maxNum = input[0];
    maxIndex = 0;

    // Mencetak nilai dan indeks setiap elemen array input
    for (i = 0; i < JumlahElementArray; i++)
    {
        cout << "Index " << i << ": " << input[i] << endl;

        // Mengecek apakah nilai elemen saat ini lebih besar dari nilai maksimum yang telah ditemukan sebelumnya
        if (input[i] > maxNum)
        {
            maxNum = input[i];
            maxIndex = i;
        }
    }

    // Mencetak nilai terbesar dan indeksnya
    cout << "Angka terbesar adalah: " << maxNum << " dengan indeks: " << maxIndex << endl;

    // Mencetak nilai variabel userInputArray untuk membuktikan bahwa inputan user disimpan dalam array
    cout << "Nilai inputan user dalam array: ";
    for (i = 0; i < JumlahElementArray; i++)
    {
        cout << userInputArray[i] << " ";
    }

    cout << endl;

    return 0;
}

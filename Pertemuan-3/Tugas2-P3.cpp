#include <iostream>

using namespace std;
int main()
{
    // Menggunakan variabel dengan tipe data float sebab angka yang diinput tidak selalu bulat dan prnyusunan data dalam satu lane dilakukan supaya lebih efisien dan juga karena ketiga data tersebut memiliki tipe yang sama yaitu float
    float number1, number2, number3;

    // Masukkan input dan output
    cout << "Hai, selamat datang di program saya. Sekarang kita akan mencari angka terbesar" << endl;
    cout << "Masukkan angka pertama : ";
    cin >> number1;
    cout << "Masukkan angka kedua : ";
    cin >> number2;
    cout << "Masukkan angka ketiga : ";
    cin >> number3;
    cout << endl
         << endl;
    cout << "Hasil dari input diatas : " << endl;

    // Pencarian angka terbesar menggunakan if-else, harus menggunakan operator "&&" untuk menandakan kalau keduanya harus benar
    if (number1 > number2 && number1 > number3) // Pengkondisian saat number 1 lebih besar daripada number 2 dan 3, maka angka terbesar ialah number 1.
    {
        cout << "Angka terbesar = " << number1 << endl;
        if (number2 > number3) // Pengkondisian saat nomer 2 lebih besar dari number 3, maka angka terbesar kedua ialah number 2.
        {
            cout << "Angka terbesar kedua = " << number2 << endl;
            cout << "Angka terbesar ketiga = " << number3 << endl;
        }
        if (number3 > number2) // Pengkondisian saat number 3 lebih besar dari number 2, maka angka terbesar kedua ialah number 3.
        {
            cout << "Angka terbesar kedua ialah : " << number3 << endl;
            cout << "Angka terbesar ketiga ialah : " << number2 << endl;
        }
    }
    else if (number2 > number1 && number2 > number3) // Pengkondisian saat number 2 lebih besar dari number 1 dan number 3, maka angka terbesar ialah number 2.
    {
        cout << "Angka terbesar = " << number2 << endl;
        if (number1 > number3) // Pengkondisian jika number 1 lebih besar dari number 3, maka angka terbesar kedua ialah number 1.
        {
            cout << "Angka terbesar kedua = " << number1 << endl;
            cout << "Angka terbesar ketiga = " << number3 << endl;
        }
        if (number3 > number1) // Pengkondisian saat number 3 lebih besar dari number 1, maka angka terbesar kedua ialah number 3.
        {
            cout << "Angka terbesar kedua = " << number3 << endl;
            cout << "Angka terbesar ketiga = " << number1 << endl;
        }
    }
    else if (number3 > number1 && number3 > number2) // Pengkondisian saat number 3 lebih besar dari nomer number 1 dan number dua, maka angka terbesar ialah number 3
    {
        cout << "Angka terbesar = " << number3 << endl;
        if (number1 > number2)
        { // Pengkondisian ketika number 1 lebih besar dari number 2, maka angka terbesar kedua ialah number 1.
            cout << "Angka terbesar kedua ialah : " << number1 << endl;
            cout << "Angka terbesar ketiga ialah : " << number2 << endl;
        }
        if (number2 > number1) // Pengkondisian ketika number 2 lebih besar dari number 1, maka angka terbesar kedua ialah number 2.
        {
            cout << "Angka terbesar kedua = " << number2 << endl;
            cout << "Angka terbesar ketiga = " << number1 << endl;
        }
    }
    else
    {
        cout << "Angka yang anda masukkan tidak valid" << endl; // Jika angka yang dimasukkan bukan lebih dari (>) maupun kurang dari (<), tetapi lebih dari sama dengan (≥) dan kurang dari sama dengan (≤)
    }

    return 0; // Menandakan bahwa program telah berakhir
}

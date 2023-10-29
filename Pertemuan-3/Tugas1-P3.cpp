#include <iostream>

using namespace std;
int main()
{
    // Mendeklarasikan variabel
    string namaDepan, namaBelakang, kelas; // Penggunaan string untuk menginput adalah sebuah kalimat
    long long NPM;                         // Penggunaan tipe data long 2 kali karena jumlah digit NPM banyak
    int score;                             // Nilai dari yang diberikan di soal

    // Memasukkan input dan output
    cout << "Silahkan isi data diri anda terlebih dahulu!" << endl
         << endl;
    cout << "Nama : ";
    cin >> namaDepan >> namaBelakang;   //Input nama lengkap
    cout << "NPM : ";
    cin >> NPM; //NPM harus diisi dengan angka, diluar dari angka FrFFFFakan error
    cout << "Kelas : ";
    cin >> kelas;   //Input kelas
    cout << "Nilai : ";
    cin >> score;   //Input nilai

    // Menggunakan if-else untuk evaluasi skor yang telah ditentukan
    if (score >= 90 && score <= 100) // Score 90-100 untuk nilai A.
    {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
    }
    else if (score >= 80 && score < 89) // Score 80-89 untuk nilai B.
    {
        cout << "Anda mendapatkan nilai B." << endl;
    }
    else if (score >= 70 && score < 79) // Score 70-79 untuk nilai C.
    {
        cout << "Anda mendapatkan nilai C." << endl;
    }
    else if (score >= 60 && score < 69) // Score 60-69 untuk nilai D.
    {
        cout << "Anda mendapatkan nilai D." << endl;
    }
    else if (score >= 0 && score < 59) // Score bernilai 0-59 untuk nilai E.
    {
        cout << "Anda mendapatkan nilai E. Wah mainnya hebat!" << endl;
    }
    elseFFF
    {
        // Bila score yang diinput diluar range 0-100 akan muncul announcement
        cout << "Maaf, nilai yang anda masukkan tidak valid. Nilai harus berada dalam rentang 0-100" << endl;
    }

    return 0;   // telah berakhir.
}

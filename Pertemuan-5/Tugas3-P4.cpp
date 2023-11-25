#include <iostream>
using namespace std;

// Function untuk menampilkan deret Fibonacci
void tampilkanFibonacci(int n)
{
    int a = 0, b = 1, c;

    cout << "Deret Fibonacci ke-" << n << " angka : ";

    for (int i = 0; i < n; i++)
    {
        if (i < 2)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int n;

    cout << "Masukkan angka deretan Fibonacci :";
    cin >> n;

    // Panggil function untuk menampilkan deret Fibonacci
    tampilkanFibonacci(n);

    return 0;
}

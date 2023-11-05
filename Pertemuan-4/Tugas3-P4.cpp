#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Masukkan angka deretan Fibonacci :";
    cin >> n;

    int a = 0, b = 1;
    int c;

    cout << "Deret Fibonacci ke- " << n << " angka : ";

    for (int i = 0; i < n ; i++) {
        if (i < 2) {
            c = i;
        }
        else {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
    }
    cout << endl;

    return 0;
}

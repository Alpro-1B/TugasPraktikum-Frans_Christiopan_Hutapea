#include <iostream>

using namespace std;

int main()
{
  cout << " Program C++ Piramida Bintang " << endl;
  cout << endl;

  int n,i,j,k;

  cout << "Input tinggi segitiga: ";
  cin >> n;

  cout << endl;

  for(i=1; i<=n; i++) {

    for(j=1; j<=n-i; j++) {
      cout << " ";
    }

    for(k=1; k<=i; k++) {
      cout << " *";
    }
    cout << endl;
  }

  return 0;
}

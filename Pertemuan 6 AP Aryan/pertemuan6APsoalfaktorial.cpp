#include <iostream>
using namespace std;

int main() {
  // n! = nx(n-1)!
  int n;
  int factorial = 1;
  cout << "n! = n x (n-1)!" << endl << "Masukkan 'n' : ";
  cin >> n;
  
  cout << "0! = 1" << endl; //ni cuma buat yang 0 karena 0 sudah pasti 1
  for(int i = 1; i <= n; ++i) {
  factorial = factorial*i;
  cout << i << "! = " << factorial << endl;
  }
          //kalau mau hasil akhir saja tinggal dikeluarkan cout di yang dalam for 
}

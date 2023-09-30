#include <iostream>
using namespace std;

int bil1,bil2,hasil;
string op;

int main() {
  cout << "Masukkan angka pertama : ";
    cin >> bil1;
  cout << "Masukkan angka kedua : ";
    cin >> bil2;
  cout << "Masukkan operator : ";
    cin >> op;

  if (op=="+"){
  hasil = bil1 + bil2;
  }
  else if (op=="-"){
  hasil = bil1 - bil2;
  }
  else if (op=="*"){
  hasil = bil1 * bil2;
  }  
  else{
  hasil = bil1 / bil2;
  }    
  cout << "Hasilnya adalah : " << hasil;
}
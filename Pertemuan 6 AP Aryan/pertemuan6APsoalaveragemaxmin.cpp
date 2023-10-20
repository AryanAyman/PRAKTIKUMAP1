#include <iostream>
using namespace std;


int main() {
  
  const int jumlah_data = 10;
  int data[jumlah_data];
  double total = 0;
  
  for (int i = 0; i < jumlah_data; i++) {
  cout << endl << "Masukkan Bilangan Ke " << (i+1) << ": ";
  cin >> data[i] ;
  total = total + data[i];
 }

  double rata2 = total / jumlah_data;
  int minimal = min(data[0],data[9]);
  int maksimal = max(data[0],data[9]);

  cout  << endl << "Nilai Rata-Rata = " << rata2 << endl;
  cout << "Nilai Terkecil = " << minimal << endl;
  cout << "Nilai Terbesar = " << maksimal << endl;
}
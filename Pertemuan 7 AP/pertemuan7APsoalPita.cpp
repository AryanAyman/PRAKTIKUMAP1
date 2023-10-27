#include <iostream>
using namespace std;
// 1.	Diberikan Panjang pita 12m. Pita tersebut akan digunakan untuk mengikat batang bunga rangkai. Setiap ikatan  bunga rangkai memerlukan 45 cm. Hitunglah berapa ikatan Bunga rangkai yang dapat dibuat dan berapa cm sisa pita yang belum dipakai?
// Buatlah fungsi konversi satuan Panjang meter ke centimeter atau sebaliknya.

void konvers_cm(int& meter);
void konvers_ikat(int& ikatan);
void konvers_m(int& centi);
int main() {
  int pita = 12;

  //Kalimat pertama mengubah meter menjadi cm
  cout << "Panjang pita 12m dikonversi ke centimeter menjadi " ; 
  konvers_cm(pita); 

  //Sekarang di konversi 1200cm dibagi 45cm
  cout << "Satu ikatan membutuhkan 45cm.\n";
  konvers_ikat(pita);
  konvers_m(pita);

}

void konvers_cm(int& meter){
  meter *= 100;
  cout << meter << "cm\n";
}

void konvers_ikat(int& ikatan){
  int jml_ikat;
  jml_ikat = ikatan / 45;
  ikatan %= 45;
  cout << jml_ikat << " ikatan bunga rangkai yang dapat dibuat.\n";
  cout << "Sisa pita adalah : " << ikatan << "cm\n";
}

void konvers_m(int& centi){
  centi /= 100;
  cout << "Sisa pita adalah : " << centi << "m.\n";
}
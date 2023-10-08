#include <iostream>
using namespace std;

int main (){

  float tes, uas, uts, tugas, akhir;
  string indeks;
  
  cout << "Masukkan nilai tes : ";
  cin >> tes;
   cout << "Masukkan nilai uts : ";
  cin >> uts;
   cout << "Masukkan nilai uas : ";
  cin >> uas;
   cout << "Masukkan nilai tugas : ";
  cin >> tugas;

  akhir = tes*0.2 + uts*0.3 + uas*0.3 + tugas*0.2;

  if (akhir>80){
    indeks = "A";
  }
  else if (80 >= akhir && akhir > 70){
    indeks = "B";
  }
  else if (70 >= akhir && akhir > 50){
    indeks = "C";
  }
  else if (akhir <= 50){
    indeks = "D";
  }

  cout << endl 
       << "Nilai Tes anda adalah : " << tes << endl 
       << "Nilai UTS anda adalah : " << uts << endl 
       << "Nilai UAS anda adalah : " << uas << endl 
       << "Nilai Tugas anda adalah : " << tugas << endl 
       << "Nilai Akhir anda adalah : " << akhir << endl 
       << "Nilai Indeks anda adalah : " << indeks << endl;

  return 0;
}

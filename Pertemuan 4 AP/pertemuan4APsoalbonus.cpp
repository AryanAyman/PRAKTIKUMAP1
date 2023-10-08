#include <iostream>
using namespace std;

int main() {

  int jml1,jml2,jml3, bonus1, bonus2, bonus3, bonustotal;
  string tipe1,tipe2,tipe3;

cout << "Masukkan Tipe Rumah Terjual Pertama : ";
cin >> tipe1;
cout << "Masukkan Jumlah Rumah yang Terjual Pertama : ";
cin >> jml1;
cout << "Masukkan Tipe Rumah Terjual Kedua : ";
cin >> tipe2;
cout << "Masukkan Jumlah Rumah yang Terjual Kedua : ";
cin >> jml2;
cout << "Masukkan Tipe Rumah Terjual Ketiga : ";
cin >> tipe3;
cout << "Masukkan Jumlah Rumah yang Terjual Ketiga : ";
cin >> jml3;

//=======TIPE 1===============================================================
if (tipe1 == "45" && jml1 > 5){
  bonus1 = jml1 * 500000;
}
else if (tipe1 == "45" && jml1 <= 5 && jml1 >=1){
  bonus1 = jml1 * 250000;
}
  
if (tipe1 == "54" && jml2 > 5){
  bonus1 = jml1 * 1000000;
}
else if (tipe1 == "54" && jml1 <= 5 && jml1 >=1){
  bonus1 = jml1 * 500000;
}
  
if (tipe1 == "70" && jml1 > 5){
  bonus1 = jml1 * 1250000;
}
else if (tipe1 == "70" && jml1 <= 5 && jml1 >=1){
  bonus1 = jml1 * 1000000;
}
//=======TIPE 1===============================================================

//=======TIPE 2===============================================================
if (tipe2 == "45" && jml2 > 5){
  bonus2 = jml2 * 500000;
}
else if (tipe2 == "45" && jml2 <= 5 && jml2 >=1){
  bonus2 = jml2 * 250000;
}
  
if (tipe2 == "54" && jml2 > 5){
  bonus2 = jml2 * 1000000;
}
else if (tipe2 == "54" && jml2 <= 5 && jml2 >=1){
  bonus2 = jml2 * 500000;
}
  
if (tipe2 == "70" && jml2 > 5){
  bonus2 = jml2 * 1250000;
}
else if (tipe2 == "70" && jml2 <= 5 && jml2 >=1){
  bonus2 = jml2 * 1000000;
}
//=======TIPE 2===============================================================
  
//=======TIPE 3===============================================================
if (tipe3 == "45" && jml3 > 5){
  bonus3 = jml3 * 500000;
}
else if (tipe3 == "45" && jml3 <= 5 && jml3 >=1){
  bonus3 = jml3 * 250000;
}
  
if (tipe3 == "54" && jml3 > 5){
  bonus3 = jml3 * 1000000;
}
else if (tipe3 == "54" && jml3 <= 5 && jml3 >=1){
  bonus3 = jml3 * 500000;
}
  
if (tipe3 == "70" && jml3 > 5){
  bonus3 = jml3 * 1250000;
}
else if (tipe3 == "70" && jml3 <= 5 && jml3 >=1){
  bonus3 = jml3 * 1000000;
}
//=======TIPE 3===============================================================



bonustotal = bonus1+bonus2+bonus3;
  
cout << "Total Bonus yang diterima adalah : " << bonustotal;
  
  return 0;
}
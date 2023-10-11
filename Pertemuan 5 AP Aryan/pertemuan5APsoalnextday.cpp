#include <iostream>
using namespace std;

int main() {
int hari,bulan,tahun,haridalambulan,lewat;
  
  cout << "Masukkan Hari (d) : " ;
  cin >> hari;
  
  cout << "Masukkan Bulan (m) : " ;
  cin >> bulan;
  
  cout << "Masukkan Tahun (y) : " ;
  cin >> tahun;

  cout << "Masukkan Hari yang ingin dilewatkan (d) : ";
  cin >> lewat;

  if (bulan == 4 or bulan == 6 or bulan == 9 or bulan ==11){
    haridalambulan = 30;
  }
  else if (bulan == 2){
    if (tahun%4==0){
        haridalambulan = 29;
    }
    haridalambulan = 28;
  }
  else{
    haridalambulan = 31;
  }

  if (hari > haridalambulan){
   hari = hari%haridalambulan;
   bulan = bulan + hari/haridalambulan;
  }
  if (bulan > 12){
    bulan = bulan%12;
    tahun = tahun + bulan/12; 
  }
    cout << endl << tahun << "-" << bulan << "-" << hari + lewat;
}
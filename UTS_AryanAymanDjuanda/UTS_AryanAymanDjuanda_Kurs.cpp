#include <iostream>
using namespace std;

// 2)	Pak Anto mempunyai tabungan dalam mata uang asing dan akan digunakan untuk membeli mobil baru, namun transaksinya memerlukan uang Rupiah. Bantulah Pak Anto melakukan perhitungannya, jika :
// a)	tabungan dalam Dollar sebanyak 12.000 US Dollar dan 20.000 Euro 
// b)	Jika diketahui kurs 1 US Dollar = Rp. 15.000, dan 1 Euro = 0.997 US Dollar, berapa rupiah dana Pak Anto yang disiapkan untuk membeli mobil baru. 
// c)	Jika harga mobil baru yang kan dibeli Pak Anto seharha Rp.425.000.000, berapa Rupiah sisa uang Pak Anto ?

void konverskurs(int& usd, int&euro);
void belanja(int& rupiah);

int main() {
  int usd,euro,rupiah;
  cout << "Masukkan USD : ";
  cin >> usd;
  cout << "Masukkan Euro : ";
  cin >> euro;
  konverskurs(usd,euro);
  rupiah = usd + euro;
  cout << "Setelah di konversi anda memiliki " << rupiah << " Rupiah\n";
  belanja(rupiah);
}

void konverskurs(int& usd, int& euro){
  usd = usd * 15000;
  euro *= 0.997;
  euro *= 15000;
}

void belanja(int& rupiah){
  int biaya;
  cout << "Masukkan Biaya Belanja (Rupiah) : ";
  cin >> biaya;
  rupiah -= biaya;
  cout << "Sisa Uang Anda adalah " << rupiah << " Rupiah";
}
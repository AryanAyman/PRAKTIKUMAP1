#include <iostream>
using namespace std;

// Sebuah minimarket meminta dibuatkan program untuk membuat rekapitulasi data
// penjualan barang periode harian. Barang-barang yang dijual sebanyak 10 macam, dan
// masing-masing mempunyai harga yang berbeda-beda. Misal barangnya adalah sembilan
// bahan pokok (sembako) dan air minum aqua.
// Hal-hal yang harus Anda buat :
// ⮚ Definisikan variabel dan tipe data untuk menyimpan data barang penjualan.
// ⮚ Input data jumlah penjualan barang untuk setiap itemnya.
// ⮚ Input Data harga setiap item barang telah ditentukan (konstanta)
// ⮚ Input jumlah terjual untuk setiap item barang
// ⮚ Hitung total penjualan Minimarket setiap harinya
// ⮚ Pilih item mana yang paling banyak terjual (laku)

// Contoh tabel penjualan yang telah diinputkan datanya ;
// Nama item    Harga      Jumlah    Total
// barang      per item    terjual   per item
// Item 1       5000          4      20000
// Item 2       6000          13     78000
// Item 3       15000         2      30000
// Berarti total penjualan pada suatu hari adalah Rp.83.000
// Item yang paling laku adalah item barang kedua (item 2)

struct produk{
string nama_item;
int harga,jumlah,total;
};

int main() {
  int ukuran_awal;
  int total = 0;
  
  cout << "Masukkan berapa banyak item yang ingin diinputkan : ";
  cin >> ukuran_awal;

  const int ukuran = ukuran_awal;

  produk barang[ukuran];

  for (int i = 0; i < ukuran; i++){ 
  int j = i + 1;

  cout << "\nMasukkan Nama item ke " << j << " : ";
  cin >> barang[i].nama_item;
  cout << "Masukkan Harga per item ke " << j << " : ";
  cin >> barang[i].harga;
  cout << "Masukkan Jumlah item ke " << j << " : ";
  cin >> barang[i].jumlah;
  cout << "Total per item ke " << j << " adalah : " << barang[i].harga * barang[i].jumlah << endl;
  
  total += barang[i].harga * barang[i].jumlah;
  }
  cout << "\nTotal penjualan Minimarket setiap harinya adalah : " << total;
}
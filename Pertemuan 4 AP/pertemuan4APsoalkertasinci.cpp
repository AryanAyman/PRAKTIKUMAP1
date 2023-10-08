#include <iostream>
using namespace std;

int main() {

  
    double panjang_kertas, lebar_kertas, margin_atas, margin_bawah, margin_kiri, margin_kanan, ukuran_titik;
    string spasi_ganda;

    cout << "Panjang kertas (inci): ";
    cin >> panjang_kertas;

    cout << "Lebar kertas (inci): ";
    cin >> lebar_kertas;

    cout << "Margin atas (inci): ";
    cin >> margin_atas;

    cout << "Margin bawah (inci): ";
    cin >> margin_bawah;

    cout << "Margin kiri (inci): ";
    cin >> margin_kiri;

    cout << "Margin kanan (inci): ";
    cin >> margin_kanan;

    cout << "Ukuran titik suatu garis (pt): ";
    cin >> ukuran_titik;

    cout << "Garis diberi spasi ganda? (ya/tidak): ";
    cin >> spasi_ganda;

    double panjang_garis = lebar_kertas - margin_kiri - margin_kanan;

    if (spasi_ganda == "ya") {
        ukuran_titik *= 72;
    }

    int karakter_per_baris = static_cast<int>(panjang_garis / ukuran_titik);

    double tinggi_garis = panjang_kertas - margin_atas - margin_bawah;
    int jumlah_baris = static_cast<int>(tinggi_garis / ukuran_titik);

    std::cout << "Jumlah karakter dalam satu baris: " << karakter_per_baris << std::endl;
    std::cout << "Jumlah baris yang dapat dicetak: " << jumlah_baris << std::endl;

    return 0;
}

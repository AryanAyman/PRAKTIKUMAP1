 #include <iostream>
using namespace std;

int main() {
    int jamsekarang, menitsekarang, detiksekarang, totaldetik, lewat, b;

    cout << "Masukkan Jam (HH): ";
    cin >> jamsekarang ;
    cout << "Masukkan Menit (MM) : ";
    cin >> menitsekarang ;
    cout << "Masukkan Detik (SS) : ";
    cin >> detiksekarang;
    cout << "Masukkan Detik dilewati (SS) : ";
    cin >> lewat ;

    // pemisah antara inputan dan hasil
    cout << endl;

    // Konversi semua ke detik
    totaldetik = jamsekarang * 3600 + menitsekarang * 60 + detiksekarang;

    b = totaldetik;

    // 86400 detik per hari (ini digunakan untuk reset angka menjadi kembali ke 0)
    totaldetik %= 86400;  

    // Ubah kembali formatnya
    jamsekarang = totaldetik / 3600;
    totaldetik %= 3600;
    menitsekarang = totaldetik / 60;
    detiksekarang = totaldetik % 60;

    cout << "Sebelum diubah : " << jamsekarang << ":" << menitsekarang << ":" << detiksekarang << endl;
     // total detik + detik lewat
     b = b + lewat;

     b %= 86400;

     jamsekarang = b /3600;
     b %= 3600;
     menitsekarang = b/60;
     detiksekarang = b%60;
       

    cout << "Setelah diubah : " << jamsekarang << ":" << menitsekarang << ":" << detiksekarang << endl;

    return 0;
}

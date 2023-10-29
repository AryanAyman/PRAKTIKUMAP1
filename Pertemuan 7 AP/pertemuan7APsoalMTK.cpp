#include <iostream>
using namespace std;

// Tuliskanlah algoritma yang membaca 3 bilangan bulat (a,b,c), dan menghitung:
// 6*( ax2 + bx +c) untuk x = 1

void pembacaan (int& a, int& b, int& c);
int main() {
  int bila,bilb,bilc;
  cout << "6* ( ax^2 + bx + c) dan x =1 " << endl
       << "Masukkan bilagan 'a' : " ;
  cin >> bila;
  cout << "Masukkan bilagan 'b' : " ;
  cin >> bilb;
  cout << "Masukkan bilagan 'c' : " ;
  cin >> bilc;


  pembacaan (bila,bilb,bilc);
}

void pembacaan (int& a, int& b,int& c){
  int x = 1;
  int hasil = 6* (a * x * x + b * x + c);
  cout << "Hasil Perhitungan dari 6* ( ax^2 + bx + c) dan x =1 adalah : " << hasil;
}
#include <iostream>
using namespace std;

void star1(int height);
void star2(int height);
void star3(int height);

int main() {
    int tinggi,tipe;

    cout << "Masukkan tinggi star: ";
    cin >> tinggi;
    cout << "Masukkan tipe star (1/2/3) : ";
    cin >> tipe;
    cout << endl;

    if (tipe == 1){
    cout << "Star 1: " << endl;
    star1(tinggi);
    }

    else if (tipe == 2){
    cout << "Star 2: " << endl;
    star2(tinggi);
    }

    else if (tipe == 3){
    cout << "Star 3: " << endl;
    star3(tinggi);
    }

    else{
      cout << "Tipe yang anda masukkan invalid.";
    }
    


}

void star1 (int tinggi) {
    for (int i = tinggi; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void star2 (int tinggi) {

  for (int i = 1; i <= tinggi; i++) {
      for (int j = 1; j <= i; j++) {
          cout << " ";
      }
      for (int k = 0; k <= 2 * (tinggi - i); k++) {
          cout << "*";
      }
      for (int j = 1; j <= i; j++) {
          cout << " ";
      }
      cout << endl;
  }
}

void star3 (int tinggi){

  //ini bagian atas
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < tinggi - i ; j++) {
          cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
          cout << " ";
        }
        for (int j = 0; j < tinggi - i; j++) {
          cout << "*";
        }
        cout << endl;
    }
  //ini bagian bawah
    for (int i = 1; i <= tinggi; i++) {
          for (int j = 1; j <= i; j++) {
              cout << "*";
          }
          for (int k = 1; k <= 2 * (tinggi - i); k++) {
              cout << " ";
          }
          for (int j = 1; j <= i; j++) {
              cout << "*";
          }
          cout << endl;
      }
    

}


#include <iostream>
using namespace std;

int main() {
int penyebut;
string a;


  cout << "Masukkan Penyebut : ";
  cin >> penyebut;

  while (penyebut<=1000){
  if (penyebut % 2 == 0){
    a="-";
  }
  else{
    a="+";
  }
  cout << a << "1/"<< penyebut<<endl;
  penyebut++;
  }

  
}
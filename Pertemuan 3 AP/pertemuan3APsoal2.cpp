#include <iostream>
using namespace std;

int bil1, bil2, bil3, maxint ;

int main() {
  cout << "Masukkan bilangan positif pertama : " ;
   cin >> bil1 ;
  cout << "Masukkan bilangan positif kedua : " ;
   cin >> bil2 ;
  cout << "Masukkan bilangan positif ketiga : " ;
   cin >> bil3 ;

  
  if (bil1>=bil2){
    maxint = bil1;
  }
    else if (bil1<bil2){
    maxint = bil2;   
  }

  if (maxint<=bil3){
    maxint = bil3;
  }

  if (maxint>=0){
  cout << "Bilangan yang paling maksimal dari ketiga bilangan adalah : " << maxint;
  } else {
  cout << "Bilangan tersebut bukan positif";
  }
  









  
}
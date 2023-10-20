#include <iostream>
using namespace std;
//ascii A-Z itu 65-90 


int main() {
  char huruf = 'A';

  for (int i = 0; i <=25;i++){
    for (char j = huruf; j <= 'Z'; j++){
      cout << j << " ";
    }
    cout << endl;
    huruf++;
  }
  
}
#include <iostream>
#include <cctype>
using namespace std;

    int verify;


string encryptPassword(const string& password) {
    string encryptedPassword = password;

    for (char& ch : encryptedPassword) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = base + (ch - base + 2) % 26;
        } else if (isdigit(ch)) {
            
            int digit = ch - '0';
            if (digit > 4){
                verify = 0;
            }
            digit *= 2;
            ch = '0' + (digit % 10);
        }
    }

    return encryptedPassword;
}

int main() {
    cout << "Masukkan Password : ";
    char Password[9];
    cin >> Password;

    bool digit = false;
    bool upper = false;
    bool lower = false;


    for (int i = 0; i < 9; i++) {
        if (isdigit(Password[i])) {
            digit = true;
        } else if (isupper(Password[i])) {
            upper = true;
        } else if (islower(Password[i])) {
            lower = true;
        } 
        }
        

    if (verify == 1){
    if (digit && upper && lower) {
        
        cout << "Password valid" << endl;
        verify = 1;
        
    } 
    }
    else {
        cout << "Password Tidak Valid." << endl;
        verify = 0;
    }
  
  if (verify == 1){
  string encryptedPassword = encryptPassword(Password);
  cout << "Encrypted password: " << encryptedPassword << endl;
  }
}
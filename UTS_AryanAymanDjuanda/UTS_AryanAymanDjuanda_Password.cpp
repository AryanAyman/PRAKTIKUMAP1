#include <iostream>
#include <cctype>
using namespace std;

string encryptPassword(const string& password) {
    string encryptedPassword = password;

    for (char& ch : encryptedPassword) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = base + (ch - base + 2) % 26;
        } else if (isdigit(ch)) {
            int digit = ch - '0';
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
    if (digit && upper && lower) {
        cout << "Password valid" << endl;
    } else {
        cout << "Password Tidak Valid." << endl;
    }
  
  string encryptedPassword = encryptPassword(Password);
  cout << "Encrypted password: " << encryptedPassword << endl;
  
}


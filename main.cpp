#include<iostream>
using namespace std;

void caesarCipher(string text, int shift) {
    for(int i = 0; i < text.length(); i++) {
        if(isalpha(text[i])) {
            if(isupper(text[i])) {
                cout << char(int(text[i] + shift - 65) % 26 + 65);
            } else {
                cout << char(int(text[i] + shift - 97) % 26 + 97);
            }
        } else {
            cout << text[i];
        }
    }
}

void caesarDecipher(string text, int shift) {
    for(int i = 0; i < text.length(); i++) {
        if(isalpha(text[i])) {
            if(isupper(text[i])) {
                cout << char(int(text[i] - shift - 65 + 26) % 26 + 65);
            } else {
                cout << char(int(text[i] - shift - 97 + 26) % 26 + 97);
            }
        } else {
            cout << text[i];
        }
    }
}

void vigenereCipher(string text, string key) {
    for(int i = 0, j = 0; i < text.length(); i++) {
        if(isalpha(text[i])) {
            if(isupper(text[i])) {
                cout << char(int(text[i] + key[j] - 130) % 26 + 65);
            } else {
                cout << char(int(text[i] + key[j] - 194) % 26 + 97);
            }
            j = (j + 1) % key.length();
        } else {
            cout << text[i];
        }
    }
}


void vigenereDecipher(string text, string key) {
    for(int i = 0, j = 0; i < text.length(); i++) {
        if(isalpha(text[i])) {
            if(isupper(text[i])) {
                cout << char(int(text[i] - key[j] + 26) % 26 + 65);
            } else {
                cout << char(int(text[i] - key[j] + 26) % 26 + 97);
            }
            j = (j + 1) % key.length();
        } else {
            cout << text[i];
        }
    }
}

int main() {
    string text, key;
    int shift;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the key: ";
    getline(cin, key);
    vigenereCipher(text, key);
    return 0;
}
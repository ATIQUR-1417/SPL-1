#include <iostream>
#include <string>
#include "conversion.h"
using namespace std;

string decToBin(int n) {
    string bin = "";
    while (n > 0) {
        bin = to_string(n % 2) + bin;
        n = n / 2;
    }
    return bin;
}

string decToOct(int n) {
    string oct = "";
    while (n > 0) {
        oct = to_string(n % 8) + oct;
        n = n / 8;
    }
    return oct;
}

string decToHex(int n) {
    string hex = "";
    while (n > 0) {
        int rem = n % 16;
        if (rem < 10) {
            hex = to_string(rem) + hex;
        }
        else {
            char c = 'A' + (rem - 10);
            hex = c + hex;
        }
        n = n / 16;
    }
    return hex;
}

int binToDec(string s) {
    int dec = 0;
    int base = 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            dec = dec + base;
        }
        base = base * 2;
    }
    return dec;
}

string binToOct(string s) {
    int dec = binToDec(s);
    return decToOct(dec);
}

string binToHex(string s) {
    int dec = binToDec(s);
    return decToHex(dec);
}

int octToDec(string s) {
    int dec = 0;
    int base = 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        int d = s[i] - '0';
        dec = dec + d * base;
        base = base * 8;
    }
    return dec;
}

string octToBin(string s) {
    int dec = octToDec(s);
    return decToBin(dec);
}

string octToHex(string s) {
    int dec = octToDec(s);
    return decToHex(dec);
}

int hexToDec(string s) {
    int dec = 0;
    int base = 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        int d;
        if (s[i] >= '0' && s[i] <= '9') {
            d = s[i] - '0';
        }
        else {
            d = s[i] - 'A' + 10;
        }
        dec = dec + d * base;
        base = base * 16;
    }
    return dec;
}

string hexToBin(string s) {
    int dec = hexToDec(s);
    return decToBin(dec);
}

string hexToOct(string s) {
    int dec = hexToDec(s);
    return decToOct(dec);
}

int conv() {

  int choice;
  int n;
  string s;

  do {

  cout << "\n\n1. decimal to binary\t   4. binary to decimal\t\t7. octal to decimal\t 10. hexadecimal to decimal\n";
  cout << "2. decimal to octal\t   5. binary to octal\t\t8. octal to binary\t 11. hexadecimal to binary\n";
  cout <<  "3. decimal to hexadecimal  6. binary to hexadecimal\t9. octal to hexadecimal\t 12. hexadecimal to octal\n";
  cout << "0. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;


        switch (choice) {
            case 1:

                cout << "Enter a decimal number: ";
                cin >> n;
                cout << "The binary equivalent is: " << decToBin(n) << "\n";
                break;

            case 2:

                cout << "Enter a decimal number: ";
                cin >> n;
                cout << "The octal equivalent is: " << decToOct(n) << "\n";
                break;

            case 3:

                cout << "Enter a decimal number: ";
                cin >> n;
                cout << "The hexadecimal equivalent is: " << decToHex(n) << "\n";
                break;

            case 4:

                cout << "Enter a binary number: ";
                cin >> s;
                cout << "The decimal equivalent is: " << binToDec(s) << "\n";
                break;

            case 5:

                cout << "Enter a binary number: ";
                cin >> s;
                cout << "The octal equivalent is: " << binToOct(s) << "\n";
                break;

            case 6:

                cout << "Enter a binary number: ";
                cin >> s;
                cout << "The hexadecimal equivalent is: " << binToHex(s) << "\n";
                break;

            case 7:

                cout << "Enter an octal number: ";
                cin >> s;
                cout << "The decimal equivalent is: " << octToDec(s) << "\n";
                break;

            case 8:

                cout << "Enter an octal number: ";
                cin >> s;
                cout << "The binary equivalent is: " << octToBin(s) << "\n";
                break;

            case 9:

                cout << "Enter an octal number: ";
                cin >> s;
                cout << "The hexadecimal equivalent is: " << octToHex(s) << "\n";
                break;

            case 10:

                cout << "Enter a hexadecimal number: ";
                cin >> s;
                cout << "The decimal equivalent is: " << hexToDec(s) << "\n";
                break;

            case 11:

                cout << "Enter a hexadecimal number: ";
                cin >> s;
                cout << "The binary equivalent is: " << hexToBin(s) << "\n";
                break;

            case 12:

                cout << "Enter a hexadecimal number: ";
                cin >> s;
                cout << "The octal equivalent is: " << hexToOct(s) << "\n";
                break;

            case 0:
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;

        }
    }while (choice != 0);
    return 0;
}

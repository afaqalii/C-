#include <iostream>

using namespace std;

// Function to encrypt a four-digit integer
int encrypt(int number) {
    // Extract digits
    int thousands = number / 1000;
    int hundreds = (number % 1000) / 100;
    int tens = (number % 100) / 10;
    int units = number % 10;

    // Encrypt each digit
    thousands = (thousands + 7) % 10;
    hundreds = (hundreds + 7) % 10;
    tens = (tens + 7) % 10;
    units = (units + 7) % 10;

    // Swap digits
    int encryptedNumber = tens * 1000 + units * 100 + thousands * 10 + hundreds;

    return encryptedNumber;
}

// Function to decrypt an encrypted four-digit integer
int decrypt(int encryptedNumber) {
    // Extract digits
    int thousands = encryptedNumber / 1000;
    int hundreds = (encryptedNumber % 1000) / 100;
    int tens = (encryptedNumber % 100) / 10;
    int units = encryptedNumber % 10;

    // Swap digits back
    int decryptedNumber = hundreds * 1000 + units * 100 + thousands * 10 + tens;

    // Decrypt each digit
    thousands = (thousands + 3) % 10;
    hundreds = (hundreds + 3) % 10;
    tens = (tens + 3) % 10;
    units = (units + 3) % 10;

    // Reconstruct the original number
    decryptedNumber = thousands * 1000 + hundreds * 100 + tens * 10 + units;

    return decryptedNumber;
}

int main() {
    int originalNumber;

    // Input
    cout << "Enter a four-digit integer: ";
    cin >> originalNumber;

    // Encrypt the number
    int encryptedNumber = encrypt(originalNumber);

    // Output encrypted number
    cout << "Encrypted Number: " << encryptedNumber << endl;

    // Decrypt the number
    int decryptedNumber = decrypt(encryptedNumber);

    // Output decrypted number
    cout << "Decrypted Number: " << decryptedNumber << endl;

    return 0;
}

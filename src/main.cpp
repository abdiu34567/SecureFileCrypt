#include <iostream>
#include <string>
#include "encrypt.h"
#include "decrypt.h"

int main()
{
    // Example usage
    std::string plaintext = "Hello, World!";
    int key = 3;

    std::string encryptedText = encrypt(plaintext, key);
    std::string decryptedText = decrypt(encryptedText, key);

    std::cout << "Original Text: " << plaintext << std::endl;
    std::cout << "Encrypted Text: " << encryptedText << std::endl;
    std::cout << "Decrypted Text: " << decryptedText << std::endl;

    return 0;
}

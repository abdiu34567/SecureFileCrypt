#include <string>
#include "encrypt.h"
#include "decrypt.h"

std::string decrypt(const std::string &ciphertext, int key)
{
    // To decrypt, use the same logic as encryption with a negative key
    return encrypt(ciphertext, -key);
}
#include <string>
#include "encrypt.h"

std::string encrypt(const std::string &plaintext, int key)
{
    std::string ciphertext = "";

    for (char c : plaintext)
    {
        if (isalpha(c))
        {
            char base = (isupper(c)) ? 'A' : 'a';
            ciphertext += ((c - base + key) % 26) + base;
        }
        else
        {
            ciphertext += c;
        }
    }

    return ciphertext;
}
#pragma once
#include <iostream>
#include <string>

// add prototypes here
void ascii(std::string text);
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
std::string encryptVigenere(std::string plaintext, std::string keyword);
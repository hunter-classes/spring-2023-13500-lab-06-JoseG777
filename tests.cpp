#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include <iostream>
#include <string>
#include <cctype>

// add your tests here
TEST_CASE("TESTS"){
    CHECK(shiftChar('a', 25) == 'z');
    CHECK(shiftChar('z', 25) == 'y');
  
    CHECK(encryptCaesar("Hello, World!", 10) == "Hovvy, Wybvn!");
    CHECK(encryptCaesar("What a sentence", 10) == "Wrkd k coxdoxmo");
  
    CHECK(decryptCaesar("Hovvy, Wybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("Wrkd k coxdoxmo", 10) == "What a sentence");
  
    CHECK(encryptVigenere("Hello, World!", "cake") == "Hevpq, Wyvnd!");
    CHECK(encryptVigenere("What a sentence", "power") == "Wvwx r hsjxvcqa");
  
    CHECK(decryptVigenere("Hevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("Wvwx r hsjxvcqa", "power") == "What a sentence");
}

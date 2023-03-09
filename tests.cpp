#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caeser.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("TESTS"){
    CHECK(shiftChar('a', 25) == 'z');
    CHECK(shiftChar('z', 25) == 'y');
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("What a sentence", 10) == "Grkd k coxdoxmo");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("Grkd k coxdoxmo", 10) == "What a sentence");
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("What a sentence", "power") == "Lvwx r hsjxvcqa");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("Lvwx r hsjxvcqa", "power") == "What a sentence");
}

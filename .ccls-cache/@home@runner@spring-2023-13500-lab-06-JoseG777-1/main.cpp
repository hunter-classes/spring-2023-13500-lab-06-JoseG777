#include <iostream>
#include <string>
#include <cctype>
#include "funcs.h"
#include "decrypt.h"
#include "vigenere.h"
#include "caeser.h"
#include "test-ascii.h"

int main(){
    std::cout<<shiftChar('a', 25)<<"\n";
    std::cout<<shiftChar('z', 25)<<"\n";

    std::cout<<encryptCaesar("Hello, World!", 10)<<"\n";
    std::cout<<encryptCaesar("What a sentence", 10)<<"\n";

    std::cout<<decryptCaesar("Rovvy, Gybvn!", 10)<<"\n";
    std::cout<<decryptCaesar("Grkd k coxdoxmo", 10)<<"\n";

    std::cout<<encryptVigenere("Hello, World!", "cake")<<"\n";
    std::cout<<encryptVigenere("What a sentence", "power")<<"\n";

    std::cout<<decryptVigenere("Jevpq, Wyvnd!", "cake")<<"\n";
    std::cout<<decryptVigenere("Lvwx r hsjxvcqa", "power")<<"\n";
    
    
}
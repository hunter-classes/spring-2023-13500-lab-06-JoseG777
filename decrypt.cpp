#include <iostream>
#include <string>
#include <cctype>
#include "caeser.h"
#include "vigenere.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string plain;
    int sub = 26 - rshift;
    for(int i = 0; i < ciphertext.length(); i++){
        if(isalpha(ciphertext[i]) == true){
            plain += shiftChar(ciphertext[i],sub);
        }
        else{
            plain += ciphertext[i];
        }
    }
    return plain;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    std::string plain1;
    int j = 0;
    for(int i = 0; i < ciphertext.length(); i++){
        if(j > keyword.length() - 1){
            j = 0;
        }
        if(isalpha(ciphertext[i]) == true){
            plain1 += shiftChar(ciphertext[i], 26 - (keyword[j] - 97));
            j += 1;
        }
        else{
            plain1 += ciphertext[i];
        }
    }
    return plain1;
}

int main(){
    std::cout<<decryptCaesar("Bfd yt Lt!", 5)<<"\n";
    std::cout<<decryptCaesar("K", 10)<<"\n";
    std::cout<<encryptCaesar("Wow what. A", 10)<<"\n";
    std::cout<<decryptCaesar("Gyg grkd. K", 10)<<"\n";
    std::cout<<encryptVigenere("Hello, World!", "cake")<<"\n";
    std::cout<<decryptVigenere("Jevpq, Wyvnd!", "cake")<<"\n";
    //std::cout<<decryptVigenere("", std::string keyword)<<"\n";
    
}
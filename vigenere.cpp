#include <iostream>
#include <string>
#include "caeser.h"

std::string encryptVigenere(std::string plaintext, std::string keyword){
    std::string encrypted;
    int j = 0;
    for(int i = 0; i < plaintext.length(); i++){
        if(j > keyword.length() - 1){
            j = 0;
        }
        if((96 < int(plaintext[i]) and int(plaintext[i]) < 123) or (64 < int(plaintext[i]) and int(plaintext[i]) < 91)){
            encrypted += shiftChar(plaintext[i], int(keyword[j]) - 97);
            j = j + 1;
        }
        else{
            encrypted += plaintext[i];
        }
    }
    return encrypted;
}
    
int main(){
    std::cout << shiftChar('a', 10) << "\n";
    std::cout << encryptVigenere("Test But More", "cake") << "\n";
    std::cout << encryptVigenere("Wow what a sentence", "power") << "\n";
}

//lcs ayph w wvchartt
//2, 0, 10 , 4
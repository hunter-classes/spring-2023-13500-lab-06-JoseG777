#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string plain;
    int sub = 26 - rshift;
    for(int i = 0; i < ciphertext.length(); i++){
        if(isalpha(ciphertext[i])){
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
    int j = 0; // for looping through the keyword
    for(int i = 0; i < ciphertext.length(); i++){ //looping through cipher text 
        if(j > keyword.length() - 1){ //if j is greater than the index of last letter, set it back to 0
            j = 0;
        }
        if(isalpha(ciphertext[i]) == true){ // if the character is in the alphabet
            plain1 += shiftChar(ciphertext[i], 26 - (keyword[j] - 97)); //shiftChar, index of speific character in chiper text
            j += 1;                                     //26 - (keyword[j] - 97), the keyword number will be at least 97 or at most 122
        }                                               //so 26 - (keyword[j] - 97) will give you a number you can use in shiftChar
        else{                                           //without error
            plain1 += ciphertext[i]; //if it isn't a character, you add it normally
        }
    }
    return plain1;
}

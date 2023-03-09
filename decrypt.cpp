#include <iostream>
#include <string>
#include "caeser.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string plain;
    int neg = rshift - (2*rshift);
    for(int i = 0; i < ciphertext.length(); i++){
        plain = shiftChar(ciphertext[i],neg);
    }
    return plain;
    
    
}

/*std::string decryptVigenere(std::string ciphertext, std::string keyword){

}*/

int main(){
    std::cout<< decryptCaesar("word", 10);
}
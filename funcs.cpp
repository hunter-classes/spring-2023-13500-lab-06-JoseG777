#include <iostream>
#include "funcs.h"

// add functions here
void ascii(std::string text){
    for(int i = 0; i < text.length(); i++){
        std::cout<<text[i]<<"\t"<<(int)text[i]<<"\n";
    }
}

char shiftChar(char c, int rshift){
    int hold;
    if((96 < int(c) and int(c) < 123)) 
        if((int(c)) + rshift > 96 and (int(c)) + rshift < 123){ 
        hold = (int(c)) + rshift; 
        return (char)hold;
    }
        else if(((int(c)) + rshift) > 122){ 
            hold = (int(c)) + rshift; 
            hold = hold - 122; 
            return (char)(96 + hold); 
        }
    else{
        return c;
    }
    if(64 < int(c) and int(c) < 91)
        if((int(c)) + rshift > 64 and (int(c)) + rshift < 91){
        hold = (int(c)) + rshift;
        return (char)hold;
    }
        else if((int(c)) + rshift > 90){
            hold = (int(c)) + rshift;
            hold = hold - 90;
            return (char)(64 + hold);
        }
    else{
        return c;
    }
}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string caeser;
    for(int i = 0; i < plaintext.length(); i++){
        caeser += shiftChar(plaintext[i], rshift);
    }
    return caeser;
}

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





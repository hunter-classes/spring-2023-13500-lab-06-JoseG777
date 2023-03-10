#include <iostream>
#include <string>
#include <cctype>


char shiftChar(char c, int rshift){
    int hold;
    if((96 < int(c) and int(c) < 123)) 
        if(int(c) + rshift < 123){ 
          hold = int(c) + rshift; 
          return char(hold);
      }
        else if(int(c) + rshift > 122){ 
            hold = (int(c)) + rshift; 
            hold = hold - 122; 
            return char(96 + hold); 
      }
        else{
            return c;
        }
    else{
        return c;
    }
    if(64 < int(c) and int(c) < 91)
        if(int(c) + rshift < 91){
        hold = (int(c)) + rshift;
        return (char)hold;
        }
        else if(int(c) + rshift > 90){
            hold = int(c) + rshift;
            hold = hold - 90;
            return char(64 + hold);
        }
        else{
            return c;
          }
    else{
        return c;
    }
}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string caeser;
    for(int i = 0; i < plaintext.length(); i++){
        if(isalpha(plaintext[i]) == true){
            caeser += shiftChar(plaintext[i], rshift);
        }
        else{
            caeser += plaintext[i];
        }
    }

    return caeser;
}


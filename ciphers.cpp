#include "atbash.h"
#include "viginere.h"
#include "morsecode.h"
#include "menu.h"



void vigenere(string file_name, int swich) {
    string key = getkey();
    string text = fileread(file_name);
    string ans = "";
    
    if (swich == 1){
        ans = decrypt(text, key);
    } else {
        ans = encrypt(text, key);
    }
    
    filewrite(ans, file_name);
}

void morsecode(string file_name, int swich){
    string text = fileread(file_name);
    string ans = "";
    
    if (swich == 1){
        ans = morsedecode(text);
    } else {
        ans = morseencode(text);
    }
    filewrite(ans, file_name);
}

void atbash(string file_name, int swich){
    string text = fileread(file_name);
    string ans = "";
    
    if (swich == 1){
        ans = atbash_encrypt(text);
    } else {
        ans = atbash_encrypt(text);
    }
    
    filewrite(ans, file_name);
}
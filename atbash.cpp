#include "Header.h"


const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*()-=+_><{}[] ,.?";
const string re_alphabet = "?., ][}{<>_+=-)(*&^%$#@!0987654321zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA";

string atbash_encrypt(string text) {
    string result = "";
    
    for (char c : text) {
        int pos = alphabet.find(c);
        c = alphabet[86 - pos];
        result += c;
    }
    
    return result;
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
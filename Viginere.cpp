#include "viginere.h"

const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*()-=+_><{}[] ,.?";


string getkey(){
    string key = "";
    bool good = false;
	do{
		try{
			cout << "Введите ключ шифрования: ";
			getline(cin, key);
			if (key == "") {
				throw runtime_error("Введена пустая строка. Попробуйте еще раз.\n");
			}
			good = true;
		}
		catch (const exception& error){
			system("clear");
			cerr << error.what();
		}
	} while (good == false);
    return key;
}

int keycode(char s){
    for(int i = 0; i < alphabet.length(); i++){
        if(s == alphabet[i]) return i;
    }
    return 0;
}

string encrypt(string text, string key){
    string code;
    for(int i = 0; i < text.length(); i++){
        code += alphabet[(keycode(text[i]) + keycode(key[i % key.length()])) % alphabet.length()];
    }
    return code;
}

string decrypt(string text, string key){
    string code;
    for(int i = 0; i < text.length(); i++){
        code += alphabet[(keycode(text[i]) - keycode(key[i % key.length()]) + alphabet.length()) % alphabet.length()];
    }
    return code;
}
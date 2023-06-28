#include "skital.h"

int skitalgetkey(){
    string key = "";
    bool good = false;
	do{
		try{
			cout << "Введите количество строк барабана скитала: ";
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

    int res = stoi(key);
    return res;
}

string skitalencode(string text, int m){
    char *ciphertext;
    string ans = "";
    int k = text.length();
    ciphertext = new char[k];

    int n = ((k - 1) / m) + 1;
    int ind;

    for (int i = 0; i < k; i++) {
	    ind = n * (i % m) + (i / m);
	    ciphertext[ind] = text[i];
    }

    for (int i = 0; i < k; i++){
        ans += ciphertext[i];
    }

    return ans;
}

string skitaldecode(string text, int m){
    char *ciphertext;
    string ans = "";
    int k = text.length();
    ciphertext = new char[k];

    int n = ((k - 1) / m) + 1;
    int ind;

    for (int i = 0; i < k; i++) {
	    ind = m * (i % n) + (i / n);
	    ciphertext[ind] = text[i];
    }

    for (int i = 0; i < k; i++){
        ans += ciphertext[i];
    }

    return ans;
}
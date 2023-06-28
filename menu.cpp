#include "menu.h"

string menu(){
    string n = "";
    string file_name = "";

    bool good = false;
	do{
        cout << "ПРОГРАММА РАБОТАЕТ ТОЛЬКО ДЛЯ ЛАТИНСКИХ БУКВ (АНГЛИЙСКОГО ЯЗЫКА)!" << endl;
        cout << " " << endl;
        cout << "Вы хотите создать новый файл или использовать готовый?" << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "Введите 1, если хотите создать и использовать новый файл" << endl;
        cout << "Введите 2, если хотите использовать готовый файл" << endl;
        getline(cin, n);
		try{
			if (n == "") {
				throw runtime_error("Введена пустая строка. Попробуйте еще раз.\n");
			} else if (n != "1" && n != "2"){
                throw runtime_error("Вы ввели " + n + ", ожидалось 1 или 2, повторите попытку: ");
            }
			good = true;
		}
		catch (const exception& error){
			system("clear");
			cerr << error.what();
		}
	} while (good == false);
    system("clear");
    if (n == "1"){
        string text = "";

        good = false;
        do{
            cout << "Введите желаемое название файла (без .txt): " << endl;
            getline(cin, file_name);
            try{
                if (file_name == "") {
                    throw runtime_error("Введена пустая строка. Попробуйте еще раз.\n");
                }
                good = true;
            }
            catch (const exception& error){
                system("clear");
                cerr << error.what();
            }
        } while (good == false);

        ofstream ost(file_name +".txt");
        cout << "Введите текст который хотите использовать: " << endl;
        getline(cin, text);
        filewrite(text, file_name);

        ifprintfile(file_name);
    } else {
        cout << "Файл должен находиться в папке с программой" << endl;
        good = false;
        do{
            cout << "Введите название файла (без .txt): " << endl;
            getline(cin, file_name);
            try{
                if (file_name == "") {
                    throw runtime_error("Введена пустая строка. Повторите попытку\n");
                }
                good = true;
            }
            catch (const exception& error){
                system("clear");
                cerr << error.what();
            }
        } while (good == false);

        ifprintfile(file_name);
    }

    return file_name;
}

int typeOfWork(){
    string n = "";
    bool good = false;

    do{
        cout << "Вы хотите зашифровать текст или расшифровать?" << endl;
        cout << "Введите 1, если хотите расшифровать" << endl;
        cout << "Введите 2, если хотите зашифровать" << endl;
        getline(cin, n);
        try{
            if (n == "") {
                throw runtime_error("Введена пустая строка. Повторите попытку\n");
            } else if (n != "1" && n != "2"){
                throw runtime_error("Вы ввели " + n + ", ожидалось 1 или 2, повторите попытку\n");
            }
            good = true;
        }
        catch (const exception& error){
            system("clear");
            cerr << error.what();
        }
    } while (good == false);

    if (n == "1") {
        system("clear");
        checkpassword();
        return 1;
    } else if (n == "2") {
        system("clear");
        checkpassword();
        return 2;
    }
}

int typeOfClipher(){
    string n = "";
    bool good = false;
    do{
        cout << "Вы хотите использовать шифр Вижинера или шифр или шифр" << endl;
        cout << "Введите 1, если хотите использовать шифр Вижинера" << endl;
        cout << "Введите 2, если хотите использовать шифр Атбаш " << endl;
        cout << "Введите 3, если хотите использовать азбуку Морзе" << endl;
        cout << "Введите 4, eсли хотите использовать шифр скитала" << endl;
        getline(cin, n);
        try{
            if (n == "") {
                throw runtime_error("Введена пустая строка. Повторите попытку\n");
            } else if (n != "1" && n != "2" && n != "3" && n != "4"){
                throw runtime_error("Вы ввели " + n + ", ожидалось 1, 2, 3 или 4. Повторите попытку\n");
            }
            good = true;
        }
        catch (const exception& error){
            system("clear");
            cerr << error.what();
        }
    } while (good == false);

    int res = stoi(n);
    
    return res;
} 

void cryption(string filename, int clipher, int typeWork){
    switch(clipher){
        case 1: 
            vigenere(filename, typeWork);
            ifprintfile(filename);
            break;
        case 2: 
            atbash(filename, typeWork);
            ifprintfile(filename);
            break;
        case 3: 
            morsecode(filename, typeWork);
            ifprintfile(filename);
            break;
        case 4: 
            skital(filename, typeWork);
            ifprintfile(filename);
            break;
    }
}
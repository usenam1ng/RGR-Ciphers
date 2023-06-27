#include "menu.h"


void filewrite(string text, string file_name){
    ofstream fin(file_name +".txt");
	fin << text;
	fin.close();
}

string fileread(string file_name){
    ifstream fin(file_name +".txt");
    stringstream ss;
    ss << fin.rdbuf();
    return ss.str();
}

void printfile(string file_name) {
    ifstream fin(file_name +".txt");
    stringstream ss;
    ss << fin.rdbuf();
    string p = ss.str();
    cout << p << endl;
    cout << " " << endl;
}

void ifprintfile(string file_name){
    bool good = false;
    string k = "";
    system("clear");
    cout << "Хотите вывести содержимое файла в консоль?" << endl;
    cout << "Введите 1 если да или 2 если нет" << endl;

    do{
        getline(cin, k);
        try{
            if (file_name == ""){
                throw runtime_error("Введена пустая строка. Повторите попытку\n");
            } else if (k != "1" && k != "2"){
                throw runtime_error("Вы ввели " + k + ", ожидалось 1 или 2, повторите попытку\n");
            }
            good = true;
        }
        catch (const exception& error){
            system("clear");
            cerr << error.what();
        }
    } while (good == false);

    if (k == "1"){
        printfile(file_name);
        cout << " " << endl;
    } else {
        system("clear");
    }
}
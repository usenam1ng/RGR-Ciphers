#include "Header.h"


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
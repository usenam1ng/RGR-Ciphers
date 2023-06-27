#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <map>

#define PASSWORD "1234"

using namespace std;

bool checkpassword();

string menu();
int typeOfWork();
int typeOfClipher();

void filewrite(string, string);
string fileread(string);
void printfile(string);
void ifprintfile(string);

void cryption(string, int, int);

void vigenere(string, int);

void morsecode(string, int);

void atbash(string, int);
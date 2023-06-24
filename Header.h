#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
#include <sstream>

#define PASSWORD "1234"

using namespace std;

bool checkpassword();

string menu();
int typeOfWork();
int typeOfClipher();

void filewrite(string, string);
string fileread(string);

void cryption(string, int, int);

void vigenere(string, int);
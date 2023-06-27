#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <map>

using namespace std;

string getkey();
int keycode(char);
string encrypt(string, string);
string decrypt(string, string);
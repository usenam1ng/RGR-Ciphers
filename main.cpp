#include "Header.h"

int main(){

    system("clear");

    checkpassword();

    string filename = menu();
    int typeWork = typeOfWork();
    int typeClipher = typeOfClipher();

    cryption(filename, typeClipher, typeWork);
}
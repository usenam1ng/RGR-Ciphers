#include "Header.h"

int main(){

    checkpassword();

    string filename = menu();
    int typeWork = typeOfWork();
    int typeClipher = typeOfClipher();

    cryption(filename, typeClipher, typeWork);
}
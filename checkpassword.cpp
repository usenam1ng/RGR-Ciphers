#include "menu.h"

bool checkpassword(){
    string password = "";
    bool good = false;
    
    do{
		try{
			cout << "Введите пароль: ";
			getline(cin, password);
			if (password != PASSWORD) {
				throw runtime_error("Пароль не верный, повторите попытку: ");
			}
			good = true;
		}
		catch (const exception& error){
			system("clear");
			cerr << error.what();
		}
	} while (good == false);

	system("clear");
    cout << "Вы успешно авторизовались" << endl;
	cout << " " << endl;
    return true;
}   
#include "morsecode.h"

string morseencode(string text){                                       
	string ans = "";										
	map<char, string> dictionary = { {'A',"._"}, {'B',"_..."}, {'C',"_._."}, {'D',"_.."}, {'E',"."}, {'F',".._."}, {'G',"__."}, {'H',"...."}, {'I',".."}, {'J',".___"}, {'K',"_._"}, {'L',"._.."}, {'M',"__"},
									  {'N',"_."}, {'O',"___"}, {'P',".__."}, {'Q',"__._"}, {'R',"._."}, {'S',"..."}, {'T',"_"}, {'U',".._"}, {'V',"..._"}, {'W',".__"}, {'X',"_.._"}, {'Y',"_.__"}, {'Z',"__.."},
									  {'a',"._"}, {'b',"_..."}, {'c',"_._."}, {'d',"_.."}, {'e',"."}, {'f',".._."}, {'g',"__."}, {'h',"...."}, {'i',".."}, {'j',".___"},{'k',"_._"}, {'l',"._.."}, {'m',"__"},
									  {'n',"_."}, {'o',"___"}, {'p',".__."}, {'q',"__._"}, {'r',"._."}, {'s',"..."}, {'t',"_"}, {'u',".._"}, {'v',"..._"}, {'w',".__"}, {'x',"_.._"}, {'y',"_.__"}, {'z',"__.."},
									  {'1',".____"}, {'2',"..___"}, {'3',"...__"}, {'4',"...._"}, {'5',"....."}, {'6',"_...."}, {'7',"__..."}, {'8',"___.."}, {'9',"____."}, {'0',"_____"}, {' ',"______"},
									  {'/',"....__"}, {'[',".__..."}, {']',"_..___"}, {'<',"__..__"}, {'>',"..__.."}, {'(',"___..."}, {')',"...___"}, {'{',"..__."}, {'}',"__.._"},
									  {'.',"._____"}, {',',"_....."}, {'_',"____._"}, {'|',"...._."}, {'?',"_.____"}, {'!',"._...."}, {';',"_...._"}, {':',".____."}, {'-',".___."}, {'$',"..____"}, {'%',"..._._"},
									  {'@',"___.._"}, {'`',"__.___"}, {'^',"_...__"}, {'~',"___.__"}, {'#',"..___."}, {'&',".___.."}, {'+',"_..._"}, {'=',"___._"}, {'*',"_..__"} };

    for (int i = 0; i < text.length(); i++){
        ans += dictionary[text[i]] + ' ';
    }
    
    return ans;
}

string morsedecode(string text){                                       
	string outputString = "";										
	map<string, char> dictionary = { {"._",'A'}, {"_...",'B'}, {"_._.",'C'}, {"_..",'D'}, {".",'E'}, {".._.",'F'}, {"__.",'G'}, {"....",'H'}, {"..",'I'}, {".___",'J'},{"_._",'K'}, {"._..",'L'}, {"__",'M'},
										{"_.",'N'}, {"___",'O'}, {".__.",'P'}, {"__._",'Q'}, {"._.",'R'}, {"...",'S'}, {"_",'T'}, {".._",'U'}, {"..._",'V'}, {".__",'W'}, {"_.._",'X'}, {"_.__",'Y'}, {"__..",'Z'},
                                        {"._",'a'}, {"_...",'b'}, {"_._.",'c'}, {"_..",'d'}, {".", 'e'}, {".._.",'f'}, {"__.",'g'}, {"....",'h'}, {"..",'i'}, {".___",'j'},{"_._",'k'}, {"._..",'l'}, {"__",'m'},
									    {"_.", 'n'}, {"___",'o'}, {".__.",'p'}, {"__._",'q'}, {"._.",'r'}, {"...",'s'}, {"_",'t'}, {".._",'u'}, {"..._",'v'}, {".__",'w'}, {"_.._",'x'}, {"_.__",'y'}, {"__..", 'z'},
										{".____",'1'}, {"..___",'2'}, {"...__",'3'}, {"...._",'4'}, {".....",'5'}, {"_....",'6'}, {"__...",'7'}, {"___..",'8'}, {"____.",'9'}, {"_____",'0'}, {"______",' '},
										{"....__",'/'}, {".__...",'['}, {"_..___",']'}, {"__..__",'<'}, {"..__..",'>'}, {"___...",'('}, {"...___",')'}, {"..__.",'{'}, {"__.._",'}'},
										{"._____",'.'}, {"_.....",','}, {"____._",'_'}, {"...._.",'|'}, {"_.____",'?'}, {"._....",'!'}, {"_...._",';'}, {".____.",':'}, {".___.",'-'}, {"..____",'$'}, {"..._._",'%'},
										{"___.._",'@'}, {"__.___",'`'}, {"_...__",'^'}, {"___.__",'~'}, {"..___.",'#'}, {".___..",'&'}, {"_..._",'+'}, {"___._",'='}, {"_..__",'*'} };

    for (int i = 0; i < text.length(); i++){
        string buf = "";
        for (int j = i; text[j] != ' '; j++){
            buf += text[j];
            i = j;
        }
        i++;
        outputString += dictionary[buf];
    }

    return outputString;
}
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	cout << "Witaj w ModiFicator! Edytorze zapisow do gry Modi i Nanna" << endl;
	int n = 12;
	char name[30];
	cout << "Wpisz nazwe zapisu. Limit 30 znakow" << endl;
	cin >> name;
	cout << "Chcesz grac jako Modi(1) czy Nanna(2)?" << endl;
	int hero;
	cin >> hero;
	cout << "Wybierz liczbe od 0-29 odpowiada ona numerowi poziomu (lista poziomow jest w pliku 'lista poziomow.txt')" << endl;
	int level;
	cin >> level;
	ofstream file("Save.MaNSaveGame", fstream::binary);
	time_t now = time(0);
	tm* localtm = localtime(&now);
	tm* gmtm = gmtime(&now);
	file.seekp(319);
	file << ' ';
	long pos = file.tellp();
	file.seekp(pos - 304);
	file.write(name, 30);
	file.seekp(pos - 176);
	file.write(asctime(gmtm), 24);
	file.seekp(pos - 320);
	char buffer[4] = {0x01, 0x05, 0x11, 0x68};
	file.write(buffer, 4);
	file.seekp(pos - 240);
	file.write("Created with ModiFicator", 24);
	if (hero==1){
		cout << "Bedziesz gral jako Modi" << endl;
	}else{
		cout << "Bedziesz gral jako Nanna" << endl;
		file.seekp(pos - 316);
		char nanna[1] = { 0x01 };
		file.write(nanna, 1);
	}
	if (level==0){
		cout << "Wybierasz poziom Wioska" << endl;
	}else if(level==1){
		cout << "Wybierasz poziom Trening" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x01 };
	}else if(level==2){
		cout << "Wybierasz poziom Kopula" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x02 };
	}else if(level==3){
		cout << "Wybierasz poziom Las" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x03 };
	}else if(level==4){
		cout << "Wybierasz poziom Polana Huggina" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x04 };
	}else if(level==5){
		cout << "Wybierasz poziom Droga do jaskin" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x05 };
	}else if(level==6){
		cout << "Wybierasz poziom Pogon" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x06 };
	}else if(level==7){
		cout << "Wybierasz poziom Korytarz 1" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x07 };
	}else if(level==8){
		cout << "Wybierasz poziom Rochuma polki" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x08 };
	}else if(level==9){
		cout << "Wybierasz poziom Korytarz 2" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x09 };
	}else if(level==10){
		cout << "Wybierasz poziom Kamienne kule" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x0A };
	}else if(level==11){
		cout << "Wybierasz poziom Korytarz 3" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x0B };
	}else if(level==12){
		cout << "Wybierasz poziom Kamienne bloki" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x0C };
	}else if(level==13){
		cout << "Wybierasz poziom Korytarz 4" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x0D };
	}else if(level==14){
		cout << "Wybierasz poziom Pajeczyna" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x0E };
	}else if(level==15){
		cout << "Wybierasz poziom Korytarz 5" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x0F };
	}else if(level==16){
		cout << "Wybierasz poziom Obrotowe polki" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x10 };
	}else if(level==17){
		cout << "Wybierasz poziom Korytarz 6" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x11 };
	}else if(level==18){
		cout << "Wybierasz poziom Spadajaca polka" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x12 };
	}else if(level==19){
		cout << "Wybierasz poziom Kamienny pies" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x13 };
	}else if(level==20){
		cout << "Wybierasz poziom Komnata gnomow" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x14 };
	}else if(level==21){
		cout << "Wybierasz poziom Kolejka" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x15 };
	}else if(level==22){
		cout << "Wybierasz poziom Polana Huggina 2" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x16 };
	}else if(level==23){
		cout << "Wybierasz poziom Machina" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x17 };
	}else if(level==24){
		cout << "Wybierasz poziom Droga na gore Freyji" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x18 };
	}else if(level==25){
		cout << "Wybierasz poziom Szczyt gory Freyji" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x19 };
	}else if(level==26){
		cout << "Wybierasz poziom Drakkar" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x1A };
	}else if(level==27){
		cout << "Wybierasz poziom Labirynt olbrzymow" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x1B };
	}else if(level==28){
		cout << "Wybierasz poziom Chmury" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x1C };
	}else if(level==29){
		cout << "Wybierasz poziom Gora Thora" << endl;
		file.seekp(pos - 308);
		char lvl[1] = { 0x1D };
	}
	file.write(lvl, 1);
    file.seekp(pos - 312);
    file.write(lvl, 1);
	file.close();
	ifstream data_file ("Save.MaNSaveGame", fstream::binary);
	cout<< "Costam:\n";
	char c;
	while(data_file.get(c)){cout<<c;}
	data_file.close();
	return 0;

}

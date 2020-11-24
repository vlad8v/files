//файлы бывают текстовые и двоичные
//my_fyle.txt
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ofstream outFile;
	outFile.open("my_file.txt");
	string str;
	getline(cin, str);
	outFile << str;
	outFile.close();
	return 0;
}
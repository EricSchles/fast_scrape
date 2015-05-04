#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

	string line;
	ofstream write_file;
	ifstream read_file;
	write_file.open("example.txt",ios::out|ios::app);
	write_file << "Writing to this file.\n";
	write_file.close();
	read_file.open("example.txt");
	while(getline (read_file,line)){
		cout << line << endl;
	}
	read_file.close();
	return 0;
}

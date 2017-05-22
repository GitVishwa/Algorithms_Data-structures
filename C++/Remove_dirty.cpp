#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

//class that contains declarations  

/*class remove{

	public:
		
};*/


int main(int argc,char **argv){

	if(argc != 3){
		std::cout << "Usage : g++ Remove_words.cpp <Sentences-to-Process> <Explicit-words-to-be-removed>" << std::endl;
		exit(0);
	}

	std::ifstream ifs1(argv[1]);
	char ch;
	
	while(!ifs1.eof()) {
		ifs1.get(ch);
		std::cout<< ch ;
	}
	ifs1.close();

	std::ifstream ifs2(argv[2]);
	//char ch;

	while(!ifs2.eof()) {
		ifs2.get(ch);
		std::cout << ch;
	}
	ifs2.close();
	return 0;
}

#include <iostream>
#include <fstream>
#include "files.hpp"

using namespace std;

void read_pgn(const char* file){
  // abrindo o arquivo do jogo
 	fstream my_file;

  my_file.open(file, ios::in);
  // verificando o arquivo
	if (not my_file) cout << "Invalid pgn file";
	else{
    for(int i=0; not my_file.eof(); i++){
      
      char caracter_temporario;
      my_file >> caracter_temporario;
      cout << caracter_temporario;
        
      if(caracter_temporario == ']') cout <<"\n";
    }
  }

	my_file.close();

}
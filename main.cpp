// -----------------------------------------
// Bibliotecas e Definições
#include <iostream>
#include <fstream>
#include <string.h>
#include "files.hpp"
// #include "table.hpp"

using namespace std;
// -----------------------------------------
// Estruturas e Variáveis Globais

struct jogo{
  string event, site, date, round, white, black, result, whiteElo, BlackElo, ECO;
};

jogo partida;

// -----------------------------------------
// Função de Leitura do pgn

// -----------------------------------------
// print table

// void show_table(){
//   for(int i=0; i<24; i++){
//     for(int j=0; j<24; j++){
//       if(i == 0) cout << horizontal;
//       else if(i%3 == 1){
//         if(j%3==0) cout << vertical;
//         else cout << horizontal;
//       }
//     }
//     cout <<"\n";
//   }
// }

// -----------------------------------------
// Função Principal

int main (int argc, char *argv[]){


  const char* pgn_file = argv[1];

  // show_table();

  read_pgn(pgn_file);

  // cout << partida.event << "\n";

  char option;

  while(option = cin.get()){
    if(option == 'q') break;
    else cout << "continue\n";
  }

  return 0;
}

// -----------------------------------------
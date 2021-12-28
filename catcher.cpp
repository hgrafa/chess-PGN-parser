// ---------------------------------------
// bibliotecas e definições

#include "catcher.h"

// ---------------------------------------
// Função que filtra as tags para a struct gameset

void filterTags(std::string line){
  
  std::string tagName="", tagValue="";
  // push back na tagName até ler o espaço
  // depois é push back no valor da tagValue
  bool space = false; 

  // indexei de 1 até n-2 para cortar as chaves
  for(int i=1; i<line.size()-1; i++){
    
    if(isspace(line[i])) space=true;
    else if(not space) tagName.push_back(line[i]);
    else tagValue.push_back(line[i]);

  }

  // limpando as aspas do valor da tag
  tagValue.pop_back(); //tiro o último caracter
  tagValue.erase(tagValue.begin()); // e o primeiro caracter

  if(tagName == "Event") matchData.event = tagValue;
  else if(tagName == "Site") matchData.site = tagValue;
  else if(tagName == "Date") matchData.date = tagValue;
  else if(tagName == "Round") matchData.round = tagValue;
  else if(tagName == "White") matchData.white = tagValue;
  else if(tagName == "Black") matchData.black = tagValue;
  else if(tagName == "Result") matchData.result = tagValue;
  else if(tagName == "WhiteElo") matchData.whiteElo = tagValue;
  else if(tagName == "blackElo") matchData.blackElo = tagValue;
  else if(tagName == "ECO") matchData.ECO = tagValue;

}

// ---------------------------------------
// Função que filtra as entre os jogadores

// void filterMoves(std::string line){

//   // transformando string e pegando round atual
//   std::string roundNumberString = "";
//   int roundNumber;
//   bool haveSpace = false, haveDot = false;

//   for(int i=0; i<line.size(); i++){ 

//     if(not haveDot and line[i] != '.') roundNumberString.push_back(line[i]);
//     else if(line[i] == '.'){
//       haveDot = true;
//       roundNumber = whatsTheNumber(roundNumberString);
//     }else if( isspace(line[i]) ) haveSpace = true;
//     else if(not haveSpace) moves[roundNumber].white.push_back(line[i]);
//     else if(haveSpace) moves[roundNumber].black.push_back(line[i]); 
//   }
// }

// ---------------------------------------
// função de leitura do arquivo pgn

void readPgn(const char* pgnFile){

  //associo o arquivo a uma variável e tento abrir ele  
  std::ifstream file (pgnFile);  
  std::string line;

  // se consegui abrir o arquivo, salvo ele linha a linha
  if (file.is_open()){

    bool moves = false;

    while ( getline(file, line) ){
       if(line.empty()) moves = true;
       else if(not moves) filterTags(line);
      //  else if(moves) filterMoves(line);
    }

    // fecho o arquivo
    file.close();
  
  } else std::cout << "invalid or empty pgn file"; 
  // se não consegui abrir, está vazio ou inválido
}

// ---------------------------------------

int whatsTheNumber(std::string numberString){

  int numberValue = 0;

  for(int i=numberString.size()-1; i>=0; i--){
    int charValue = (int)numberString[i]-48;
    numberValue += charValue*pow(10, numberString.size()-i-1);
  }

  return numberValue;
}

// ---------------------------------------

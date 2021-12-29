#include <iostream>
#define white() std::cout<<(char)0xDB
#define black() std::cout<<(char)0xFF
#define print(x) std::cout<<x

char tagColuna = 'A';
int tagLinha = 8; 

// bool isValidSpace(int position_x, int position_y){

// }

void table(){
  
  std::cout << std::endl;

  bool modeloLinha= false, modeloColuna = false;


  for(int i=-1; i < 24; i++){
    // gerando linhas com 3 de altura para cada peça

    print("  ");
    
    // a cada 3 linhas eu inverto o modelo
    if(i%3 == 0) modeloLinha = not modeloLinha;

    // gerando casas com 7 de largura
    for(int j=0; j < 56; j++){ // 

      if(i==-1 and j%7==3){ 
        print(tagColuna);
        tagColuna++;
        continue;
      }else if(i==-1){
        print(" ");
        continue;
      } 
      // if(isValidSpace(j, i) and ){ // se for uma posição de peça e tem peça no local

      if(modeloLinha){ // branco -> preto -> branco
        if(j%7 == 0)  modeloColuna = not modeloColuna; 
        if(modeloColuna) white();
        else black();
      }else{ //preto -> branco --> preto
        if(j%7 == 0)  modeloColuna = not modeloColuna;
        if(not modeloColuna) white();
        else black();      
      }
      
      if(i%3==1 and j==55){
        std::cout << " " << tagLinha;
        tagLinha--;
        continue;
      }

    }

    std::cout<<std::endl;
  }

  // coluna++;
}

int main(){

  table();
  
  return 0;
}

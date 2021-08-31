# Interpretador para Jogo de Xadrez

Programa para interpretar e interagir com arquivos `.pgn`, exibindo a partida e podendo ir e voltar entre as jogadas. 

Etapas atuais:

- [x] Abrir e iterar o arquivo `.pgn` com o programa `.cpp`
- [ ] Construir Layout base tabuleiro.
- [ ] Implementar funções de interface com o usuário, como próxima jogada, jogada anterior, sair e resetar a partida.

Problemas atuais:

- [x] Filtrar as tags do PGN e as jogadas, pois na leitura do pgn a biblioteca `fstream` não consegue ler os espaços do `.pgn`.

<br>

------------------------------------------
<br>

## Referência: PGN - Portable Game Notation
---
Entensão dos arquivos na pasta `game files` usada para descrever propriedades dos jogos usando as ***Seven Tag Roasters*** para indicar as principais informações e mais algumas etiquetas adicionais em algumas das partidas.

A representação do jogo vem logo abaixo utilizando a notação ***movetext***, em particular para estes arquivos no modelo **NAP(Notação Algébrica Padrão)**.

Para mais detalhes sobre o PGN, [clique aqui](https://en.wikipedia.org/wiki/Portable_Game_Notation).

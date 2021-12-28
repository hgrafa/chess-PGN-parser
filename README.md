# Interpretador para Jogo de Xadrez ♟️

Programa para interpretar e interagir com arquivos `.pgn`, exibindo a partida e podendo ir e voltar entre as jogadas.

## 🟢 Funcionamento do programa

1. `data.h/data.cpp` Criar estruturas capazes de guardar os dados a serem extraídos do `.pgn`.
2. `catcher.h/catcher.cpp ` Extrair os dados do `.pgn` e alocar nas estruturas já criadas.
3. `interpteter.h/interpreter.cpp` Interpreta os dados salvos e associa a dados que possam ser exibidos no tabuleiro para o usário. Responsável por chegar xeques e xeque-mates também.
4. `printer.h/printer.cpp` Printar o tabuleiro e as peças nas respectivas posições.

**plano futuro:** implementar CRUD na interação do usuário.

## 🟡 Status dos arquivos

1. `main.cpp`: working ✔️
2. `data.h/data.cpp` : bug with catcher 🪲
3. `catcher.h/catcher.cpp `: bug with data 🪲
4. `interpteter.h/interpreter.cpp`: not implemented
5. `printer.h/printer.cpp`: working ✔️

## 🔴 Problema atual

Estou tendo multiplas declarações das `stucts` durante o uso das `headers`.


## 💻 Referência: PGN - Portable Game Notation
Entensão dos arquivos na pasta `game files` usada para descrever propriedades dos jogos usando as ***Seven Tag Roasters*** para indicar as principais informações e mais algumas etiquetas adicionais em algumas das partidas.

A representação do jogo vem logo abaixo utilizando a notação ***movetext***, em particular para estes arquivos no modelo **NAP(Notação Algébrica Padrão)**.

Para mais detalhes sobre o PGN, [clique aqui](https://en.wikipedia.org/wiki/Portable_Game_Notation).

#pragma once
#ifndef CATCHER_H
#define CATCHER_H
  // ---------------------------------------
  // including libraries
  #include "data.h"
  #include <string>
  #include <fstream>
  #include <iostream>
  #include <ctype.h>
  #include <vector>
  #include <math.h>

  // ---------------------------------------
  // pré declarando as funções
  void readPgn(const char* file);
  void filterTags(std::string line);
  // void filterMoves(std::string line);
  int whatsTheNumber(std::string numberString);
#endif
// ---------------------------------
// headers and definitions

#ifndef CATCHER_H
#define CATCHER_H

	#include "data.h"
	#include <fstream>
	#include <iostream>
	#include <ctype.h>
	#include <vector>
	#include <math.h>

// ---------------------------------------
// pré declarando as funções
	void readPgn(const char* file, gameSet *matchData, playerSet (*moves)[]);
	void filterTags(std::string line, gameSet *matchData);
	void filterMoves(std::string line, playerSet (*moves) []);
	int whatsTheNumber(std::string numberString);

#endif // !CATCHER_H


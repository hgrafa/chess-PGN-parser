// ---------------------------------
// headers and definitions

#include "catcher.h"

#define log(x) std::cout<<x<<std::endl

struct GameSet matchData;
struct MoveSet movements;

// ---------------------------------
// the main

int main(int argc, char* argv[]) {

	const char* pgnFile = argv[1];
	log(argv[1]);

	readPgn(pgnFile, &matchData, &movements);
	std::cout << movements.round[1].white << "\n";

	return 0;
}

// ---------------------------------
// ---------------------------------
// headers and definitions

#include "catcher.h"

struct gameSet matchData;
struct playerSet moves[MAXPLAYS];

// ---------------------------------

int main(int argc, char* argv[]) {

	const char* pgnFile = argv[1];

	readPgn(pgnFile, &matchData, (&moves)[MAXPLAYS]);
	std::cout << moves[1].white << "\n";

	return 0;
}

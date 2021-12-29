// ---------------------------------
// headers and definintions 

#ifndef DATA_H
#define DATA_H

	#include <cstdio>
	#include <string>

  const int MAXPLAYS = 300;

// ---------------------------------
// pre declaring structs

  struct GameSet {
    // not opicional instances
    std::string event, date, site, white, round, black, result, whiteElo, blackElo, ECO;

    // optional instances
    long int timeControl = 0;
    std::string annotator = "", plyCount = "", time = "", termination = "", mode = "";
  };

  struct PlayerSet {
    std::string white, black;
  };

  struct MoveSet {
    PlayerSet round[MAXPLAYS];
  };

#endif

// ---------------------------------

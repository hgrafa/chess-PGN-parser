// ---------------------------------
// headers and definintions 

#ifndef DATA_H
#define DATA_H

	#include <cstdio>
	#include <string>
	#define MAXPLAYS 1000

// ---------------------------------
// pre declaring structs

  struct gameSet {
    // not opicional instances
    std::string event, date, site, white, round, black, result, whiteElo, blackElo, ECO;

    // optional instances
    long int timeControl = 0;
    std::string annotator = "", plyCount = "", time = "", termination = "", mode = "";
  };


  struct playerSet {
    std::string white, black;
  };

#endif

// ---------------------------------

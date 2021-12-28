 #include "data.h"
 
 struct gameSet matchData = {
    // not opicional instances
    std::string event, date, site, white, round, black, result, whiteElo, blackElo, ECO;

    // optional instances
    long int timeControl=0; 
    std::string annotator="", plyCount="", time="", termination="", mode="";
  } ;


  // struct playerSet {
  //   std::string white, black;
  // };

  // ---------------------------------------
    // instances of structs

    // struct playerSet moves[MAXPLAYS];
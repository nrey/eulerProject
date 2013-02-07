#include"eu0095.h"

void eu0095 :: solucion(){
  // ---------------------------------------------------- //
  tstart = (double)clock()/CLOCKS_PER_SEC;
  // ---------------------------------------------------- //

  output = 0;

  // ---------------------------------------------------- //

  // ---------------------------------------------------- //
  tstop = (double)clock()/CLOCKS_PER_SEC;
  ttime = tstop-tstart;
  // ---------------------------------------------------- //
}

void eu0095 :: printsolution(){
  std::cout << "Euler 0095\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

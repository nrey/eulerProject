#include"eu0093.h"

void eu0093 :: solucion(){
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

void eu0093 :: printsolution(){
  std::cout << "Euler 0093\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

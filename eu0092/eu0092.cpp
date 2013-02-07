#include"eu0092.h"

void eu0092 :: solucion(){
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

void eu0092 :: printsolution(){
  std::cout << "Euler 0092\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

#include"eu0059.h"

void eu0059 :: solucion(){
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

void eu0059 :: printsolution(){
  std::cout << "Euler 0059\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

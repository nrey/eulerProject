#include"eu0100.h"

void eu0100 :: solucion(){
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

void eu0100 :: printsolution(){
  std::cout << "Euler 0100\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

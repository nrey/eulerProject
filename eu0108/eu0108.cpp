#include"eu0108.h"

void eu0108 :: solucion(){
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

void eu0108 :: printsolution(){
  std::cout << "Euler 0108\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

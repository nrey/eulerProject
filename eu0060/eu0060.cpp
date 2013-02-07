#include"eu0060.h"

void eu0060 :: solucion(){
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

void eu0060 :: printsolution(){
  std::cout << "Euler 0060\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

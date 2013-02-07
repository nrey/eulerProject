#include"eu0086.h"

void eu0086 :: solucion(){
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

void eu0086 :: printsolution(){
  std::cout << "Euler 0086\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

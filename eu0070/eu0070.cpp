#include"eu0070.h"

void eu0070 :: solucion(){
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

void eu0070 :: printsolution(){
  std::cout << "Euler 0070\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

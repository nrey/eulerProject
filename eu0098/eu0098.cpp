#include"eu0098.h"

void eu0098 :: solucion(){
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

void eu0098 :: printsolution(){
  std::cout << "Euler 0098\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}

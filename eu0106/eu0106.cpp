#include"eu0106.h"

void eu0106 :: solucion(){
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

void eu0106 :: printsolution(){
  std::cout << "Euler 0106\n";
  std::cout << "Time: " << ttime << "\n";
  std::cout << output;
}
